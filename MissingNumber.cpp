#include <bits/stdc++.h>

using namespace std;

int main() {
    // I/O
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    if (!(cin >> n)) return 0;

    // expected & actual
    long long expected_sum = n * (n + 1) / 2;
    long long actual_sum = 0;

    // Read in n-1 numbers and accumulate them
    for (int i = 0; i < n - 1; i++) {
        long long temp;
        cin >> temp;
        actual_sum += temp;
    }

    // Output difference
    cout << expected_sum - actual_sum << endl;

    return 0;
}