#include<bits/stdc++.h>
using namespace std;
int main() {
    char x = 'a';
    int i = x; // Implicit conversion from float to int
    cout << "Implicit conversion from float to int: " << i << endl;

    // Explicit conversion
    double d = 5.67;
    int j = int(d); // Explicit conversion from double to int
    cout << "Explicit conversion from double to int: " << j << endl;



    //print asccii value of character from a to z
    cout << "ASCII values from 'a' to 'z':" << endl;
    for (x = 'a'; x <= 'z'; ++x) {
        cout << x << ": " << int(x) << endl; // Implicit conversion from char to int
    }


    cout << "ASCII values from 'A' to 'Z':" << endl;
    for (char y = 'A'; y <= 'Z'; ++y) {
        cout << y << ": " << int(y) << endl; // Implicit conversion from char to int
    }







    return 0;
}