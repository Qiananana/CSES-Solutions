#include <iostream>
using namespace std;

int main() {
    // Increase the input and output speed
    // sync_with_stdio(0): Use only the streams of C++, not those of C.
    // cin.tie(0): Released the binding of cin and cout, allowing input and output to operate independently.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; 
    if (!(cin >> n)) return 0;
    
    while (true) {
        cout << n << " ";
        if (n == 1) break;
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
    }
    cout << endl;
    return 0;
}