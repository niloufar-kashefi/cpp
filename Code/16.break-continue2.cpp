#include <iostream>
using namespace std;

int main() {
    // Example 1: For Loop with break and continue
    cout << "For loop example:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i > 7) {
            break; // Exit loop if i is greater than 7
        }
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << i << " "; // Print odd numbers less than or equal to 7
    }
    cout << endl;

    // Example 2: While Loop with break and continue
    cout << "While loop example:" << endl;
    int j = 1;
    while (j <= 10) {
        if (j > 7) {
            break; // Exit loop if j is greater than 7
        }
        if (j % 2 == 0) {
            j++; // Increment j to avoid infinite loop when using continue
            continue; // Skip even numbers
        }
        cout << j << " "; // Print odd numbers less than or equal to 7
        j++;
    }
    cout << endl;

    // Example 3: Do-While Loop with break and continue
    cout << "Do-while loop example:" << endl;
    int k = 1;
    do {
        if (k > 7) {
            break; // Exit loop if k is greater than 7
        }
        if (k % 2 == 0) {
            k++; // Increment k to avoid infinite loop when using continue
            continue; // Skip even numbers
        }
        cout << k << " "; // Print odd numbers less than or equal to 7
        k++;
    } while (k <= 10);
    cout << endl;

    return 0;
}
