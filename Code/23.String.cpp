#include <iostream>
#include <string> // This is needed for working with strings in C++

using namespace std;

int main() {
    // ==========================
    // 1. String Initialization
    // ==========================
    cout << "1. String Initialization\n";

    string str1 = "Hello, world!"; // Initialize a string with a literal
    cout << "str1: " << str1 << endl;

    string str2; // Empty string by default
    cout << "str2: " << str2 << endl;

    string str3(5, 'A'); // 5 characters, each being 'A'
    cout << "str3: " << str3 << endl;

    cout << endl;

    // ==========================
    // 2. Accessing Characters in a String
    // ==========================
    cout << "2. Accessing Characters\n";

    cout << "First character of str1: " << str1[0] << endl; // 'H'
    cout << "Character at index 7 of str1: " << str1.at(7) << endl; // 'w'
    
    str1[7] = 'W'; // Changing 'w' to 'W'
    cout << "Modified str1: " << str1 << endl;

    cout << endl;

    // ==========================
    // 3. String Concatenation
    // ==========================
    cout << "3. String Concatenation\n";

    string str4 = "Hello";
    string str5 = "World";

    string result = str4 + " " + str5; // Concatenates with a space
    cout << "Concatenation using +: " << result << endl;

    str4.append(" ").append(str5); // Appending directly to str4
    cout << "Concatenation using append(): " << str4 << endl;

    cout << endl;

    // ==========================
    // 4. String Length
    // ==========================
    cout << "4. String Length\n";

    cout << "Length of str1: " << str1.length() << endl; 
    cout << "Length of str2: " << str2.size() << endl; 
    cout << "Length of str3: " << str3.size() << endl; 

    cout << endl;

    // ==========================
    // 5. Substring
    // ==========================
    cout << "5. Substring\n";

    string subStr = str1.substr(2, 3); // Extract substring starting from index 0, length 5
    cout << "Substring of str1 (2, 3): " << subStr << endl;

    cout << endl;

    // ==========================
    // 6. Comparing Strings
    // ==========================
    cout << "6. Comparing Strings\n";

    string str6 = "apple";
    string str7 = "banana";

    if (str6 == str7) {
        cout << "str6 is equal to str7" << endl;
    } else {
        cout << "str6 is not equal to str7" << endl;
    }

    if (str6 < str7) {
        cout << "str6 is lexicographically less than str7" << endl; // This will be printed
    }

    cout << endl;



    // ==========================
    // 7. Using getline() for Input
    // ==========================
    cout << "7. Using getline() for Input\n";

    // getline() is used to read a full line of input, including spaces, from the user.
    // It is different from cin >> which stops at the first whitespace.
    string fullLine;
    cout << "Enter a full sentence: ";
    getline(cin, fullLine); // Read a full line of text, including spaces
    cout << "You entered: " << fullLine << endl;

    cout << endl;

    // ==========================
    // 8. Special Characters in Strings
    // ==========================
    cout << "8. Special Characters in Strings\n";

    // To represent special characters inside a string (such as double quotes, single quotes, and backslashes), 
    // we use escape sequences:

    string specialChars = "She said, \"Hello, world!\" and then left.";
    cout << "Special character \" example: " << specialChars << endl;

    // Single quote escape
    string singleQuote = "It\'s a beautiful day!";
    cout << "Single quote escape \' example: " << singleQuote << endl;

    // Backslash escape
    string backslash = "This is a backslash: \\";
    cout << "Backslash escape \\ example: " << backslash << endl;

    cout << endl;

    // ==========================
    // 9. Adding Numbers and Strings
    // ==========================
    cout << "9. Adding Numbers and Strings\n";

    // Adding a number to a string (String concatenation):
    int number = 100;
    string text = "The number is: ";

    // Adding a string to a number (Invalid operation):
    // int resultError = text + number; // Error! Cannot add a string to an integer directly

    return 0;
}

