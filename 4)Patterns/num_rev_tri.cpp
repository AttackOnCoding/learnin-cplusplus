#include <iostream>
using namespace std;
int main() {
    int n;
    int num = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}