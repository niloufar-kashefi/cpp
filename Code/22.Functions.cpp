#include <iostream>
#include <cmath>

using namespace std;

// Step 1: A Simple Void Function
void sayHello() {
    cout << "Hello, welcome to the C++ function tutorial!" << endl;
}

// Step 2: Function with Parameters and Return
int addTwoNumbers(int a, int b) {
    return a + b;
}

// Step 3: Function Overloading (Integer & Double Multiplication)
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// Step 4: Function that Returns a Different Type (e.g., char)
char getGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else return 'D';
}


// Step 5: Function with Multiple Parameters of Different Types
float calculateRectangleArea(float length, float width) {
    return length * width;
}


// Step 6: Pass by Reference vs Pass by Value
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a = " << a << ", b = " << b << endl;
}

// Step 7: Default Parameters
void printMessage(string message = "Default message") {
    cout << message << endl;
}


int main() {

    // Step 1: Simple Void Function
    cout << "\nStep 1: Simple Void Function" << endl;
    sayHello();

    // Step 2: Function with Parameters and Return
    cout << "\nStep 2: Function with Parameters and Return" << endl;
    int sum = addTwoNumbers(3, 4);
    cout << "Sum of 3 and 4: " << sum << endl;

    // Step 3: Function Overloading
    cout << "\nStep 3: Function Overloading" << endl;
    cout << "Integer multiplication: 3 * 4 = " << multiply(3, 4) << endl;
    cout << "Double multiplication: 3.5 * 4.2 = " << multiply(3.5, 4.2) << endl;

    // Step 4: Function Returning Different Type (char)
    cout << "\nStep 4: Function Returning Different Type" << endl;
    cout << "Grade for score 85: " << getGrade(85) << endl;

    // Step 5: Function with Multiple Parameters of Different Types
    cout << "\nStep 7: Function with Multiple Parameters" << endl;
    cout << "Rectangle area (5.5 x 3.2): " << calculateRectangleArea(5.5, 3.2) << endl;

    // Step 6: Pass by Reference vs Pass by Value
    cout << "\nStep 10: Pass by Reference vs Pass by Value" << endl;
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    // Step 7: Default Parameters
    cout << "\nStep 11: Default Parameters" << endl;
    printMessage();
    printMessage("Custom message");


    return 0;
}

