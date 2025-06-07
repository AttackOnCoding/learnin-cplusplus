#include<bits/stdc++.h>
using namespace std;
int main() {
    //do while loop
    int i = 0;  
    int n;  
    cout << "Enter a number: ";

    cin >> n;   
    do {
        cout << i << " ";
        i++;
    } while (i < n);  // The loop will continue until i is less than n


    cout << endl;  // Print a newline after the loop completes

    // The do-while loop ensures that the body is executed at least once, even if n is 0.
    cout << "Loop completed." << endl;


    do {
        cout << "This will always execute at least once." << endl;
    } while (false);  // This condition is false, but the loop runs once


    return 0;
}