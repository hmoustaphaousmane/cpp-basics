#include <iostream>
using std::cout; // imports cout from std namespace
using std::endl; // imports endl from std namespace

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 3;
    bool a, b;

    // Display initial values
    cout << "x is equal to " << x << " and y is equal to " << y << endl;

    // Arithmetic operators: +, -, *, /, %
    cout << "\n=== Arithmetic operations ===" << endl;
    int sum = x + y;                    // sum: 8
    int difference = x - y;             // difference: 2
    int product = x * y;                // product: 15
    int intQuotient = x / y;            // integer quotient: 1 (truncated)
    float floatQuotient = (float)x / y; // float quotient: 1.66667
    int remainder = x % y;              // remainder: 2

    // Display results of each operation
    cout << "x plus y equals " << sum << endl;
    cout << "x minus y equals " << difference << endl;
    cout << "x times y equals " << product << endl;
    cout << "x divided by y (integer) equals " << intQuotient << endl;
    cout << "x divided by y (float) equals " << floatQuotient << endl;
    cout << "x modulo y equals " << remainder << endl;
    
    // Logical operators: && (AND), || (OR), ! (NOT)
    cout << "\n=== Logical operators ===" << endl;
    a = true; b = true;
    cout << "When a is true and b is true" << endl;
    cout << "a && b evaluates to " << (a && b) << endl;
    cout << "a || b evaluates to " << (a || b) << endl;
    cout << "!a evaluates to " << (!a) << endl;
    
    a = true; b = false;
    cout << "\nWhen a is true and b is false" << endl;
    cout << "a && b evaluates to " << (a && b) << endl;
    cout << "a || b evaluates to " << (a || b) << endl;
    cout << "!a evaluates to " << (!a) << endl;

    a = false; b = true;
    cout << "\nWhen a is false and b is true" << endl;
    cout << "a && b evaluates to " << (a && b) << endl;
    cout << "a || b evaluates to " << (a || b) << endl;
    cout << "!a evaluates to " << (!a) << endl;

    a = false; b = false;
    cout << "\nWhen a is false and b is false" << endl;
    cout << "a && b evaluates to " << (a && b) << endl;
    cout << "a || b evaluates to " << (a || b) << endl;
    cout << "!a evaluates to " << (!a) << endl;
    
    // Comparison operators: ==, !=, <, <=, >, >=
    // ADDED: Complete section for comparison operators
    cout << "\n=== Comparison operators ===" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    
    cout << "x == y evaluates to " << (x == y) << endl;  // Equal to (false: 0)
    cout << "x != y evaluates to " << (x != y) << endl;  // Not equal to (true: 1)
    cout << "x < y  evaluates to " << (x < y) << endl;   // Less than (false: 0)
    cout << "x <= y evaluates to " << (x <= y) << endl;  // Less than or equal (false: 0)
    cout << "x > y  evaluates to " << (x > y) << endl;   // Greater than (true: 1)
    cout << "x >= y evaluates to " << (x >= y) << endl;  // Greater than or equal (true: 1)
    
    // Additional examples with different values
    cout << "\n--- Additional comparisons ---" << endl;
    int p = 10, q = 10;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "p == q evaluates to " << (p == q) << endl;  // true: 1
    cout << "p != q evaluates to " << (p != q) << endl;  // false: 0
    cout << "p <= q evaluates to " << (p <= q) << endl;  // true: 1
    
    return 0;
}