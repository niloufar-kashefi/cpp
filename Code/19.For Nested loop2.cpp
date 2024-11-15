#include <iostream>
using namespace std;

int main() {
    int size = 5; // Define the size of the grid

    // Outer loop for rows
    for (int i = 1; i <= size; i++) {
        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            cout << "* "; // Print a star followed by a space
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
