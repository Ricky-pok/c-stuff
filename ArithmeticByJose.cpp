// =========================
// Description: Simple C++ program that performs basic operations
// Project Name: Variable Operations
// Programmer(s): José Félix
// Date: February 9, 2025
// =========================

#include <iostream> // Include the library for input and output 
using namespace std; // Use the standard namespace to simplify the code.

int main() {
    // Message displayed when the program starts
    cout << "Welcome to my C++ Program: Variable Operations!\n\n";

    //  Variable Declaration and Initialization
    int integerNumber = 10;      // An integer number
    float floatNumber = 5.5;     // A number with decimals (low precision)
    double doubleNumber = 15.75; // Another number with decimals (high)

    // Display the initialized variables
    cout << "Initial Values:\n";
    cout << "Integer: " << integerNumber << "\n";
    cout << "Float: " << floatNumber << "\n";
    cout << "Double: " << doubleNumber << "\n\n";

    //  Arithmetic Operations
    // Calculate the sum, difference, product, and division of "integerNumber" and "floatNumber".
    int sum = integerNumber + floatNumber;
    int difference = integerNumber - floatNumber;
    int product = integerNumber * floatNumber;
    float division = integerNumber / floatNumber; // Division is between int and float.

    //  Display the results with clear labels
    cout << "Operation Results:\n";
    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << difference << "\n";
    cout << "Product: " << product << "\n";

    // Check to ensure division is not by 0
    if (floatNumber != 0) {
        cout << "Division: " << division << "\n";
    }
    else {
        cout << "Error: Cannot divide by 0.\n";
    }

    //  Program Conclusion
    cout << "\nProgram finished. Thank you for using it!\n";

    return 0; // End the program
}
