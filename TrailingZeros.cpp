#include <iostream>

using namespace std;

/**
 * Problem: Trailing Zeros
 * Logic: The number of trailing zeros in n! is determined by the number of times 
 * 5 is a factor in the numbers from 1 to n. We count multiples of 5, 25, 125, etc.
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 0;
    
    // We divide n by powers of 5 (5, 25, 125...) to count how many factors of 5 exist
    // Using a loop to avoid overflow and handle n up to 10^9
    for (long long i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    cout << count << endl;

    return 0;
}