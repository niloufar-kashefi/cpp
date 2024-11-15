#include <iostream>
using namespace std;

int main() {
    // Outer loop with a step of 2 (counts by 2)
    for (int i = 2; i <= 10; i += 2) {
        // Inner loop with a step of 3 (counts by 3)
        for (int j = 3; j <= 12; j += 3) {
            cout << "(" << i << ", " << j << ") "; // Print the pair (i, j)
        }
        cout << endl; // New line after each row
    }

    return 0;
}
