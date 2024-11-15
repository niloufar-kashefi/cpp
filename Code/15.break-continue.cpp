#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 5; // Define the size of the multiplication table

    // Print the top header row
    cout << " |";
    for (int i = 1; i <= cols; i++) {
        cout << " " << i; // Print header numbers
        if (i < 10) cout << " "; // Add an extra space for single-digit numbers
    }
    cout << endl;

    // Print a line to separate the header from the table
    cout << "---+";
    for (int i = 1; i <= cols; i++) {
        cout << "---";
    }
    cout << endl;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Print row header (current row number)
        cout << " " << i << " |";

        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            int product = i * j;

            // Print the product with appropriate spaces for alignment
            if (product < 10) {
                cout << " " << product << " "; // Add spaces for single-digit products
            } else {
                cout << " " << product; // No extra space needed for two-digit products
            }
        }
        cout << endl; // New line after each row
    }

    return 0;
}
