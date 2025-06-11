#include<bits/stdc++.h>
using namespace std;

// prints series of fibonacci numbers

void fib(int n) {
    int a = 0, b = 1, c;
    if (n == 0) {
        cout << a << " ";
        return;
    }
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    fib(n);
    return 0;
}