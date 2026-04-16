#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Problem: Coin Piles
 * Logic:
 * 1. The total number of coins (a + b) must be divisible by 3.
 * 2. Neither pile can be more than twice the size of the other.
 */

void solve() {
    long long a, b;
    cin >> a >> b;

    // Condition 1: Total sum must be divisible by 3
    // Condition 2: Larger pile cannot exceed 2 * smaller pile
    if ((a + b) % 3 == 0 && max(a, b) <= 2 * min(a, b)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}