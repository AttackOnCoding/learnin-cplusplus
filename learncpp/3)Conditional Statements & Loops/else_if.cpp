#include<bits/stdc++.h>
using namespace std;
int main() {
    int marks;
    cout << " enter marks:" << endl;
    cin >> marks;
    if (marks>=90){
        cout << "A" <<endl;
    }
    else if (marks >= 80 && marks < 90) {
        cout << "B" << endl;
    }
    else if (marks >= 70 && marks < 80) {
        cout << "C" << endl;
    }
    else if (marks >= 60 && marks < 70) {
        cout << "D" << endl;
    }
    else if (marks >= 50 && marks < 60) {
        cout << "E" << endl;
    }
    else{
        cout << "F" <<endl;
    }
    return 0;
}