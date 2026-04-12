#include <iostream>

using namespace std;

/**
 * Problem: Bit Strings
 * Logic: The number of bit strings of length n is 2^n.
 * Since n can be up to 10^6, we must perform modulo 10^9+7 at each step.
 */

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long result = 1;
    long long mod = 1e9 + 7; // 10^9 + 7

    // Calculate 2^n by multiplying 2 iteratively
    for (int i = 0; i < n; i++) {
        result = (result * 2) % mod;
    }

    cout << result << endl;

    return 0;
}