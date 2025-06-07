#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=10,b=5;
    cout << "Addition: " << a + b << endl; // Addition
    cout << "Subtraction: " << a - b << endl; // Subtraction
    cout << "Multiplication: " << a * b << endl; // Multiplication  
    cout << "Division: " << a / b << endl; // Division
    cout << "Modulus: " << a % b << endl; // Modulus

    // Unary operations
    cout << "Increment: " << ++a << endl; // Increment
    cout << "Decrement: " << --b << endl; // Decrement
    cout << "Negation: " << -a << endl; // Negation



    cout << "Absolute value: " << abs(-a) << endl; // Absolute value
    cout << "Power: " << pow(a, b) << endl; // Power
    cout << "Square root: " << sqrt(a) << endl; // Square root
    cout << "Ceiling: " << ceil(5.3) << endl; // Ceiling
    cout << "Floor: " << floor(5.7) << endl; // Floor
    cout << "Round: " << round(5.5) << endl; // Round
    cout << "Maximum: " << max(a, b) << endl; // Maximum
    cout << "Minimum: " << min(a, b) << endl; // Minimum
    cout << "Average: " << (a + b) / 2.0 << endl; // Average
    cout << "Remainder: " << fmod(5.5, 2.0) << endl; // Remainder
    cout << "Trigonometric sine: " << sin(30 * M_PI / 180) << endl; // Sine
    return 0;
    
}