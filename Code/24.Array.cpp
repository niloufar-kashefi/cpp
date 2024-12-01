#include <iostream>
using namespace std;

// =========================
// Function to print an array
// =========================
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

int main() {
    // ===========================
    // 1. Simple array definition
    // ===========================
    cout << "1. Simple array definition" << endl;

    // Define an array of integers without initialization
    int numbers[5]; // Values are uninitialized and may contain garbage values

    // Manually initialize some elements
    numbers[0] = 10; // Manual initialization
    numbers[1] = 20; // Manual initialization

    // Print the array values
    for (int i = 0; i < 5; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] 
             << " (Garbage if uninitialized)" << endl;
    }
    cout << endl;

    // ===========================
    // 2. Initialization at definition
    // ===========================
    cout << "2. Initialization at definition" << endl;

    // Define an array with full initialization
    int initializedArray[4] = {1, 2, 3, 4};

    // Define an array with partial initialization
    int partialArray[6] = {5, 10}; // Remaining elements will be set to zero

    // Print the arrays
    cout << "initializedArray:" << endl;
    printArray(initializedArray, 4);

    cout << "partialArray:" << endl;
    printArray(partialArray, 6);
    cout << endl;

    // ===========================
    // 3. Define without size
    // ===========================
    cout << "3. Define without specifying size" << endl;

    // Compiler determines the size based on the number of values
    int autoSizedArray[] = {10, 20, 30, 40};

    // First way to access elements: Calculate the size of the array
    int size = sizeof(autoSizedArray) / sizeof(autoSizedArray[0]);
    cout << "autoSizedArray:" << endl;
    printArray(autoSizedArray, size);

    cout << "Size of autoSizedArray = " << size << endl;
    cout << endl;
//    // Second way to access elements: Using a range-based for loop to print the array
//    cout << "Using a range-based for loop to print the array:" << endl;
//    for (int num : autoSizedArray) { 
//        // 'num' takes the value of each element in 'autoSizedArray'
//        cout << "Value: " << num << endl;
//    }


    // ===========================
    // 4. Use loops for initialization and printing
    // ===========================
    cout << "4. Use loops for initialization and printing" << endl;

    const int SIZE = 5;
    int loopArray[SIZE];

    // Take input from the user for initialization
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value for index " << i << ": ";
        cin >> loopArray[i];
    }

    // Print the array values
    cout << "loopArray:" << endl;
    printArray(loopArray, SIZE);
    cout << endl;

    // ===========================
    // 5. Multi-dimensional array
    // ===========================
    cout << "5. Multi-dimensional array (Matrix)" << endl;

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print the matrix values
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << endl;
        }
    }
    cout << endl;

    // ===========================
    // 6. Special cases and potential errors
    // ===========================
    cout << "6. Special cases and potential errors" << endl;

    // Accessing out-of-bounds index
    cout << "Attempting to access out-of-bounds index:" << endl;
    try {
        // This line results in undefined behavior
        cout << "numbers[10] = " << numbers[10] << endl; 
    } catch (...) {
        cout << "Error: Accessing out-of-bounds index" << endl;
    }

    // Define an array with invalid size
    // int invalidArray[0]; // Error: Size of 0 is invalid

    // Over-initialization
    // int smallArray[3] = {1, 2, 3, 4}; // Error: Too many initializers


    return 0;
}

