#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    if (!(cin >> s)) return 0;

    // Initialize trackers
    // ans: stores the global maximum length found
    // count: stores the length of the current repeating sequence
    int ans = 1;
    int count = 1;

    // Traverse the string starting from the second character
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            // Character matches previous one, increment current streak
            count++;
        } else {
            // Sequence broken, reset count to 1
            count = 1;
        }
        
        // Update global maximum if current streak is longer
        if (count > ans) {
            ans = count;
        }
    }

    // Output the result
    cout << ans << endl;

    return 0;
}