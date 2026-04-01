#include <bits/stdc++.h>

using namespace std;

/**
 * Problem: Number Spiral
 * Logic: Find the maximum of y and x to determine the "layer".
 * Then check if the layer is even or odd to determine the direction of numbers.
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long z = max(y, x);
        long long ans;

        if (z % 2 == 0) {
            // If the layer is even
            if (y == z) {
                // On the vertical edge, starts from z^2 at (z, 1)
                ans = z * z - (x - 1);
            } else {
                // On the horizontal edge, starts after (z-1)^2
                ans = (z - 1) * (z - 1) + y;
            }
        } else {
            // If the layer is odd
            if (x == z) {
                // On the horizontal edge, starts from z^2 at (1, z)
                ans = z * z - (y - 1);
            } else {
                // On the vertical edge, starts after (z-1)^2
                ans = (z - 1) * (z - 1) + x;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}