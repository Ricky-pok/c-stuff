/*
Math Tutor Program
Author: Jose Felix
Course: 2025SP Intro to Computer Sci/OOP (CSC-120-WB)
Date: 23 February 2025
Description: A simple calculator 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double firstOperand, secondOperand; // Operand variables
    int remainder; // Variable for modulus operation
    char operation; // Operator choice
    char choice; // To repeat the program

    cout << "====================================\n";
    cout << "         Math Tutor Program         \n";
    cout << "====================================\n\n";

    do {
        // Display menu
        cout << "Available operations:\n";
        cout << " +  Addition\n";
        cout << " -  Subtraction\n";
        cout << " *  Multiplication\n";
        cout << " /  Division\n";
        cout << " %  Modulus (Only with integers)\n\n";

        // User input
        cout << "Enter first operand: ";
        cin >> firstOperand;
        cout << "Enter second operand: ";
        cin >> secondOperand;
        cout << "Enter operation (+, -, *, /, %): ";
        cin >> operation;

        // Perform calculations
        switch (operation) {
        case '+':
            cout << "Result: " << firstOperand + secondOperand << "\n";
            break;
        case '-':
            cout << "Result: " << firstOperand - secondOperand << "\n";
            break;
        case '*':
            cout << "Result: " << firstOperand * secondOperand << "\n";
            break;
        case '/':
            if (secondOperand != 0)
                cout << "Result: " << firstOperand / secondOperand << "\n";
            else
                cout << "Error: Division by zero is not allowed.\n";
            break;
        case '%':
            if (secondOperand != 0) {
                remainder = static_cast<int>(firstOperand) % static_cast<int>(secondOperand);
                cout << "Result: " << remainder << "\n";
            }
            else {
                cout << "Error: Modulus by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Error: Invalid operator. Please try again.\n";
        }

        // Ask if the user wants another calculation
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;
        cout << "\n";
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using Math Tutor!\n";
    return 0;
}
