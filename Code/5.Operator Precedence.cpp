#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int c = 2;
    int d = 4;
    
    cout<< "a is:" << a<< "\nb is:" << b << "\nc is:" << c << "\nd is:" << d << endl;
    
    // Expression without parentheses
    int result1 = a + b * c; // Expected: 10 + (5 * 2) = 20
    
    // Expression with parentheses altering precedence
    int result2 = (a + b) * c; // Expected: (10 + 5) * 2 = 30
    
    cout << "Without parentheses a + b * c: " << result1 << endl;
    cout << "With parentheses ((a + b) * c): " << result2 << endl;
    
    
        // Complex expression
    int result = a + b * c - d / c; 
    // Expected: a + (b * c) - (d / c) = 4 + 6 - 0 = 10 (integer division)
    
    cout << "Result of a + b * c - d / c: " << result << endl;
    
    
    return 0;
}

