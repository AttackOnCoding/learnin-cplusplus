#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    for(int i = 0; i < b; i++) {
        cout << a + i << " ";
    }
    cout << endl;
    // Print numbers from a to b using for loop
    // The for loop initializes i to 0, checks the condition i < b, and increments i by 1 in each iteration.
    
    return 0;
}