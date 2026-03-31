#include <bits/stdc++.h>

using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    if (!(cin >> n)) return 0;

    // Use long long to avoid overflow
    long long total_moves = 0;
    
    // We only need to compare the current element with the previous one.
    // So we don't necessarily need a whole array; a variable for 'previous' is enough.
    long long prev_val;
    cin >> prev_val;

    for (int i = 1; i < n; i++) {
        long long current_val;
        cin >> current_val;

        if (current_val < prev_val) {
            // If current is smaller, add the difference to total moves
            total_moves += (prev_val - current_val);
            // After increasing, the 'current' becomes equal to 'prev'
            // We don't change 'prev_val' here because it stays the same
        } else {
            // If current is already larger or equal, just update prev_val
            prev_val = current_val;
        }
    }

    cout << total_moves << endl;

    return 0;
}