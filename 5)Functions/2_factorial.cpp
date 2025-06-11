#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    long long fact = 1; // <-- use long long here
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "factorial of "<< n <<" is "<< fact(n) << endl;
}