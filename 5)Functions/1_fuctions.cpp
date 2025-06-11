#include <iostream>
using namespace std;

    //function for sum of two numbers
    int sum(int a, int b) {
        return a + b;
    }
    //function for difference of two numbers
    int difference(int a, int b) {
        return a - b;
    }
    //function for minimum of two numbers
    int minimum(int a, int b) {
        return (a < b) ? a : b;
    }   
    //function for maximum of two numbers
    int maximum(int a, int b) {
        return (a > b) ? a : b;
    }

    int main(){
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "Sum: " << sum(a, b) << endl;
        cout << "Difference: " << difference(a, b) << endl;
        cout << "Minimum: " << minimum(a, b) << endl;
        cout << "Maximum: " << maximum(a, b) << endl;

        return 0;
    }

