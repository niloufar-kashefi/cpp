// C++ Developer Tutorial Program: Introduction to Variables

// Step 1: Include necessary libraries
#include <iostream>  // iostream library is essential for input and output (cin, cout)

// Step 2: Use the standard namespace
using namespace std;  // Avoids the need to prefix standard functions with "std::"

// Step 3: Define the main function, which is the entry point of the program
int main() {
    // Step 4: Define various types of variables
    
    // Integer (int): stores whole numbers (no decimal points)
    int age = 25;  // Example use: storing age, count, etc.
    
    // Floating Point (float): stores numbers with decimals, less precision than double
    float price = 19.99f;  // Example use: product price, distance
    
    // Double: stores decimal numbers with double precision (more accuracy than float)
    double pi = 3.14159265359;  // Example use: scientific calculations, precise values
    
    // Character (char): stores a single character (in single quotes)
    char grade = 'A';  // Example use: grades, symbols
    
    // String (string): stores sequences of characters (words, sentences)
    string name = "John Doe";  // Example use: names, messages
    
    // Boolean (bool): stores true or false values
    bool isActive = true;  // Example use: flag for active status, yes/no condition

    // Step 5: Output each variable to the console using cout
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Pi Value: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Name: " << name << endl;
    cout << "Is Active: " << isActive << endl;

    // Step 6: Return 0 to signify successful execution
    return 0;
}

