#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem: Two Sets
 * Logic: 
 * 1. Check if total sum n*(n+1)/2 is even.
 * 2. Use greedy approach from n down to 1 to fill the target sum (total_sum / 2).
 */

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    // Calculate total sum of 1...n
    long long total_sum = n * (n + 1) / 2;

    // If total sum is odd, we cannot split it equally
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    long long target = total_sum / 2;
    vector<int> set1, set2;

    // Greedy strategy: start from the largest number
    for (int i = n; i >= 1; i--) {
        if (i <= target) {
            target -= i;
            set1.push_back(i);
        } else {
            set2.push_back(i);
        }
    }

    // Output set 1
    cout << set1.size() << "\n";
    for (int i = 0; i < set1.size(); i++) {
        cout << set1[i] << (i == set1.size() - 1 ? "" : " ");
    }
    cout << "\n";

    // Output set 2
    cout << set2.size() << "\n";
    for (int i = 0; i < set2.size(); i++) {
        cout << set2[i] << (i == set2.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}