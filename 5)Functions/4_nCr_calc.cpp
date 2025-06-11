#include<bits/stdc++.h>
using namespace std;


int factorial(int x){
    int fact = 1;
    for (int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int a, int b) {
    if (a < b) {
        cout << "n must be greater than or equal to r" << endl;
        return 0;
    }
    return factorial(a) / (factorial(b) * factorial(a - b));
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < b) {
        cout << "n must be greater than or equal to r" << endl;
        return 0;
    }
    cout << a << "C" << b << " is: " << nCr(a, b) << endl;


    return 0;
}