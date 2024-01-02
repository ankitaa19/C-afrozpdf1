#include <iostream>
using namespace std;

int main() {
    int n = 4;  

    // Print the upper part of the pattern
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= 2 * i - 1; ++j) {
            cout << j;
        }

        for (int k = 2 * i - 2; k >= i; --k) {
            cout << k;
        }

        cout << endl;
    }

    // Print the lower part of the pattern
    for (int i = n - 1; i >= 1; --i) {
        for (int j = i; j <= 2 * i - 1; ++j) {
            cout << j;
        }

        for (int k = 2 * i - 2; k >= i; --k) {
            cout << k;
        }

        cout << endl;
    }

    return 0;
}