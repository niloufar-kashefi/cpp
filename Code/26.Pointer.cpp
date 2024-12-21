#include <iostream>
using namespace std;

int main() {
    // 1. Define a simple variable
    int x = 42;  // An integer variable

    // 2. Define a pointer and assign it the address of the variable
    int* ptr = &x;  // Pointer to the address of variable x

    // 3. Display information
    cout << "Value of x: " << x << endl;          // Value of variable x
    cout << "Address of x: " << &x << endl;       // Memory address of x
    cout << "Value of ptr: " << ptr << endl;      // Pointer pointing to the address of x
    cout << "Value at *ptr: " << *ptr << endl;    // Value of the variable the pointer points to (42)

    // 4. Modify the value of x using the pointer
    *ptr = 100;  // Value of x is changed
    cout << "New value of x: " << x << endl;      // New value (100)

    // 5. Pointer to an array
    int arr[5] = { 10, 20, 30, 40, 50 };  // Define an array
    int* arrPtr = arr;                    // Pointer to the array (points to the first element)

    cout << "\nArray using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(arrPtr + i) << endl;  // Access array elements
    }

    return 0;
}