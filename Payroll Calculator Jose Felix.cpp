/*
    Author: José Félix
    Date: 02/16/2025
    Purpose: Payroll Calculator Program
    Description: This program calculates payroll for multiple employees, handling invalid input without conditionals,
    generating random employee IDs, formatting output, and displaying the average pay.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    // Display banner with program title
    cout << "\n==============================\n";
    cout << "     Payroll Calculator      \n";
    cout << "==============================\n\n";

    srand(time(0)); // Seed the random number generator with the current time

    const int NUM_EMPLOYEES = 3; // Number of employees to process
    int employeeID[NUM_EMPLOYEES], hoursWorked[NUM_EMPLOYEES]; // Arrays to store employee IDs and hours worked
    double payRate[NUM_EMPLOYEES], totalPay[NUM_EMPLOYEES], sumPay = 0.0, averagePay; // Arrays for payroll calculations

    // Collect employee data first
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        employeeID[i] = rand() % 9000 + 1000; // Generate a random employee ID between 1000 and 9999

        cout << "Enter hours worked for Employee " << i + 1 << " (integer): ";
        cin >> hoursWorked[i];
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter pay rate for Employee " << i + 1 << " (double): ";
        cin >> payRate[i];
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        totalPay[i] = hoursWorked[i] * payRate[i];
        sumPay += totalPay[i];
    }

    // Display table header for better readability
    cout << "\n" << left << setw(12) << "Employee ID" << setw(12) << "Hours" << setw(12) << "Pay Rate" << setw(12) << "Total Pay" << endl;
    cout << string(48, '-') << endl; // Line separator for table format

    // Display employee payroll information
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << setw(12) << employeeID[i] << setw(12) << hoursWorked[i] << fixed << setprecision(2) << setw(12) << payRate[i] << setw(12) << totalPay[i] << endl;
    }

    // Calculate and display average pay for all employees
    averagePay = sumPay / NUM_EMPLOYEES;
    cout << string(48, '-') << endl; // Line separator for clarity
    cout << "Average Pay:" << right << setw(34) << fixed << setprecision(2) << averagePay << endl; // Print average pay

    return 0; // Exit the program
}