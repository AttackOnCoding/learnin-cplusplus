#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    //print numbers from a to b
    int i = 0;

    while (i < b) {
        cout << a + i << " ";
        i++;
    }

    return 0;
}