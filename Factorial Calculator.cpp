/*
    Description: Program to calculate the factorial of a positive integer using a while loop.
    Project Name: Factorial Calculator
    Programmer: José Félix
    Date: March 9, 2025
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Display a banner with the program name
    cout << "Factorial Calculator - Module 6 Assignment\n\n";

    int num;

    // Ask the user to enter a positive integer
    cout << "Enter a positive integer: ";

    // Validate the user input to ensure it's a positive integer
    while (!(cin >> num) || num <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear(); // Clear any input errors
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    int factorial = 1;
    int temp = num; // Store the original number for display

    // Calculate the factorial using a while loop
    cout << temp << "! = ";
    while (num > 1) {
        cout << num << " * "; // Display multiplication steps
        factorial *= num; // Multiply the current number to factorial
        num--; // Decrease the number by 1
    }
    cout << "1 = " << factorial << "\n"; // Display the final result

    return 0; 
}
