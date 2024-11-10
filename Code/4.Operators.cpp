#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10;
    int b = 5;
    
    cout<< "a is:" << a<< " and b is:" << b << endl;
    int sum = a + b;       // Addition
    int diff = a - b;      // Subtraction
    int product = a * b;   // Multiplication
    int quotient = a / b;  // Division
    int remainder = a % b; // Modulus (remainder)

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Assignment Operators
    int x = 10;    // Simple assignment
    x += 5;        // Equivalent to x = x + 5;
    cout << "Value of x after += 5: " << x << endl;
    x *= 2;        // Equivalent to x = x * 2;
    cout << "Value of x after *= 2: " << x << endl;

    // Comparison Operators
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    bool c = true;
    bool d = false;
    cout<< "c is:" << c << " and d is:" << d << endl;
    cout << "c && d: " << (c && d) << endl; // Logical AND
    cout << "c || d: " << (c || d) << endl; // Logical OR
    cout << "!c: " << (!c) << endl;         // Logical NOT

    return 0;
}

