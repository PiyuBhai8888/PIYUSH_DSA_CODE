#include<iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    
    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(a > 5 && b < 10): " << ((a > 5) && (b < 10)) << endl; // Logical AND
    cout << "(a < 5 || b < 10): " << ((a < 5) || (b < 10)) << endl; // Logical OR
    cout << "!(a == 10): " << !(a == 10) << endl;                     // Logical NOT

    return 0;
}