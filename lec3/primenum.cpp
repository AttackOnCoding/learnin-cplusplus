#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 2;

    cout << "Enter a number: ";
    cin >> n;

    while (i < n) {
        if (n % i == 0) {
            cout << "not prime" << endl;
            break;  // Added break statement to exit the loop if not prime
        }
        i = i + 1;
    }



    return 0;
}
