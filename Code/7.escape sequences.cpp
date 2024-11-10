#include <iostream>
using namespace std;

int main() {
    // Newline: \n moves the cursor to the beginning of the next line
    cout << "Hello,\nWorld!\n"; 
    
    // Tab: \t inserts a horizontal tab (typically 4 or 8 spaces)
    cout << "Column1\tColumn2\tColumn3\n"; 
    
    // Carriage Return: \r moves the cursor to the beginning of the line, overwriting characters
    cout << "12345\rABCDE\n";  // The output will display "ABCDE" instead of "12345"
        
    return 0;
}

