#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    if (!(cin >> n)) return 0;

    // Case 1: n = 1 is valid by default
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    // Case 2: For n = 2 and n = 3, no beautiful permutation exists
    // e.g., n=3: [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]
    // All possible arrangements have at least one pair of adjacent numbers with difference 1.
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    // Case 3: For n >= 4, use the "Evens then Odds" construction strategy.
    // This ensures that adjacent elements have a difference of at least 2.
    
    // First, print all even numbers: 2, 4, 6...
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    // Second, print all odd numbers: 1, 3, 5...
    for (int i = 1; i <= n; i += 2) {
        cout << i << (i + 2 > n ? "" : " ");
    }

    cout << endl;

    return 0;
}