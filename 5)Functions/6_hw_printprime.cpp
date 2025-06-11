#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void primenum(int n){
    for(int i = 1 ; i <= n ; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    
}

int main (){
    int n;
    cout << "enter n:";
    cin >> n;

    primenum(n);

}