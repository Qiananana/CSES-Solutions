#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {
        // Total ways to pick 2 squares out of k*k
        long long total_ways = (k * k) * (k * k - 1) / 2;
        
        // Ways two knights can attack each other
        // Each attack forms a 2x3 or 3x2 block, and there are 2 ways in each block.
        long long attacking_ways = 4 * (k - 1) * (k - 2);
        
        cout << total_ways - attacking_ways << endl;
    }

    return 0;
}