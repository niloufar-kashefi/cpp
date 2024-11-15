#include <iostream>
using namespace std;

int main() {
    // Example 1: For Loop
    // This loop will print numbers from 1 to 5.
    cout << "For loop example:" << endl;
    for (int i = 1; i <= 5; i++) {
        // Print the current value of i
        cout << i << " ";
    }
    cout << endl;

    // Example 2: While Loop
    // This loop will print numbers from 1 to 5.
    cout << "While loop example:" << endl;
    int j = 1; // Initialize the variable
    while (j <= 5) {
        // Print the current value of j
        cout << j << " ";
        j++; // Increment j by 1 after each iteration
    }
    cout << endl;

    // Example 3: Do-While Loop
    // This loop will print numbers from 1 to 5.
    cout << "Do-while loop example:" << endl;
    int k = 1; // Initialize the variable
    do {
        // Print the current value of k
        cout << k << " ";
        k++; // Increment k by 1 after each iteration
    } while (k <= 5); // Check condition at the end of the loop
    cout << endl;

    return 0;
}
