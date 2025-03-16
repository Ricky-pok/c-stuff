/*
    Assignment: Midterm Part B - Savings Account Balance
    Name: José Félix
    Date: March 16 2025
    Instructor: Uju Makhene

    Pseudocode:
    1. Prompt user for the initial balance, annual interest rate, and number of months.
    2. Validate all inputs to ensure correctness.
    3. Loop through each month:
       - Ask for deposit amount (validate it is non-negative).
       - Ask for withdrawal amount (validate it is non-negative).
       - Calculate and apply monthly interest.
       - If balance becomes negative, display a message and terminate the program.
    4. Save transaction details to a file.
    5. Display a final summary including the final balance, total deposits, total withdrawals, and interest earned.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Variable declarations
    double annualInterestRate, startingBalance, deposit, withdrawal, monthlyInterest;
    int months;
    string fileName = "JoseFelix_AccountTransaction.txt";
    ofstream outFile(fileName);

    // Validate and input starting balance
    cout << "Enter the starting balance: ";
    while (!(cin >> startingBalance) || startingBalance < 0) {
        cout << "Invalid input. Enter a positive starting balance: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    // Validate and input annual interest rate
    cout << "Enter the annual interest rate (as percentage): ";
    while (!(cin >> annualInterestRate) || annualInterestRate < 0) {
        cout << "Invalid input. Enter a non-negative interest rate: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    // Validate and input number of months
    cout << "Enter the number of months: ";
    while (!(cin >> months) || months <= 0) {
        cout << "Invalid input. Enter a positive number of months: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    // Convert annual rate to monthly rate
    double monthlyInterestRate = annualInterestRate / 12 / 100;
    double totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;

    outFile << fixed << setprecision(2);
    outFile << "Month\tDeposit\tWithdrawal\tInterest\tBalance\n";

    // Loop through each month
    for (int i = 1; i <= months; i++) {
        // Validate deposit amount
        cout << "Month " << i << " - Enter deposit amount: ";
        while (!(cin >> deposit) || deposit < 0) {
            cout << "Invalid input. Enter a non-negative deposit: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        startingBalance += deposit;
        totalDeposits += deposit;

        // Validate withdrawal amount
        cout << "Month " << i << " - Enter withdrawal amount: ";
        while (!(cin >> withdrawal) || withdrawal < 0) {
            cout << "Invalid input. Enter a non-negative withdrawal: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        startingBalance -= withdrawal;
        totalWithdrawals += withdrawal;

        // Calculate monthly interest
        monthlyInterest = startingBalance * monthlyInterestRate;
        totalInterest += monthlyInterest;
        startingBalance += monthlyInterest;

        // Check for negative balance
        if (startingBalance < 0) {
            cout << "\nAccount has been closed due to negative balance.\n";
            outFile << "Account closed due to negative balance.\n";
            break;
        }

        // Save to file
        outFile << i << "\t" << deposit << "\t" << withdrawal << "\t" << monthlyInterest << "\t" << startingBalance << "\n";
    }

    // Display final summary
    cout << "\nFinal Balance: $" << fixed << setprecision(2) << startingBalance << endl;
    cout << "Total Deposits: $" << totalDeposits << endl;
    cout << "Total Withdrawals: $" << totalWithdrawals << endl;
    cout << "Total Interest Earned: $" << totalInterest << endl;

    outFile.close(); // Close file
    cout << "Transaction history saved in " << fileName << "\n";

    return 0;
}
