#include <iostream>
using namespace std;

int main() {
    // Example 1: For Loop with break
    cout << "For loop with break:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exit loop when i is equal to 5
        }
        cout << i << " "; // Print numbers until 4
    }
    cout << endl;

    // Example 2: For Loop with continue
    cout << "For loop with continue:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << i << " "; // Print only odd numbers
    }
    cout << endl;

    // Example 3: While Loop with break
    cout << "While loop with break:" << endl;
    int j = 1;
    while (j <= 10) {
        if (j == 5) {
            break; // Exit loop when j is equal to 5
        }
        cout << j << " "; // Print numbers until 4
        j++;
    }
    cout << endl;

    // Example 4: While Loop with continue
    cout << "While loop with continue:" << endl;
    j = 1;
    while (j <= 10) {
        if (j % 2 == 0) {
            j++; // Increment j to avoid infinite loop
            continue; // Skip even numbers
        }
        cout << j << " "; // Print only odd numbers
        j++;
    }
    cout << endl;

    // Example 5: Do-While Loop with break
    cout << "Do-while loop with break:" << endl;
    int k = 1;
    do {
        if (k == 5) {
            break; // Exit loop when k is equal to 5
        }
        cout << k << " "; // Print numbers until 4
        k++;
    } while (k <= 10);
    cout << endl;

    // Example 6: Do-While Loop with continue
    cout << "Do-while loop with continue:" << endl;
    k = 1;
    do {
        if (k % 2 == 0) {
            k++; // Increment k to avoid infinite loop
            continue; // Skip even numbers
        }
        cout << k << " "; // Print only odd numbers
        k++;
    } while (k <= 10);
    cout << endl;

    return 0;
}
