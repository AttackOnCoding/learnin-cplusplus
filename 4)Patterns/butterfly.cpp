#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter num:";
    cin >> n;

    // Top half
    for(int i = 1; i <= n; i++) {
        // Left stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for(int s = 1; s <= 2 * (n - i); s++) {
            cout << " ";
        }
        // Right stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for(int i = n; i >= 1; i--) {
        // Left stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for(int s = 1; s <= 2 * (n - i); s++) {
            cout << " ";
        }
        // Right stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}