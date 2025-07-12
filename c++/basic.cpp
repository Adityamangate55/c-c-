#include <iostream>

using namespace std;

int main() {
    // Basic data types
    int integerVar = 10;               // Integer type
    float floatVar = 5.5;              // Floating-point type
    double doubleVar = 3.14159;        // Double precision floating-point type
    char charVar = 'A';                // Character type

    // Output the values of the variables
    cout << "Integer Variable: " << integerVar << endl;
    cout << "Float Variable: " << floatVar << endl;
    cout << "Double Variable: " << doubleVar << endl;
    cout << "Character Variable: " << charVar << endl;

    // Basic arithmetic operations
    int sum = integerVar + 5;
    float product = floatVar * 2.0;
    double quotient = doubleVar / 2.0;
    int difference = integerVar - 3;

    cout << "\nArithmetic Operations:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Difference: " << difference << endl;

    // Relational operations
    bool isEqual = (integerVar == 10);
    bool isNotEqual = (floatVar != 2.0);
    bool isGreater = (doubleVar > 3.0);
    bool isLessOrEqual = (integerVar <= 15);

    cout << "\nRelational Operations:" << endl;
    cout << "Is Equal to 10: " << (isEqual ? "True" : "False") << endl;
    cout << "Is Not Equal to 2.0: " << (isNotEqual ? "True" : "False") << endl;
    cout << "Is Greater than 3.0: " << (isGreater ? "True" : "False") << endl;
    cout << "Is Less or Equal to 15: " << (isLessOrEqual ? "True" : "False") << endl;

    return 0;
}