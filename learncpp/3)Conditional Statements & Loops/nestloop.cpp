#include<bits/stdc++.h>
using namespace std;
int main() {
    //nested for loop
    int n;
    cout << "Enter a number: "; 
    cin >> n;
    // Print a pattern of stars
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Move to the next line after printing stars for each row
    }

    

    return 0;
}