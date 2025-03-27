/*
    Project: Geometry Area Calculator
    Programmer: José Félix
    Date: March 27, 2025
    Description:
    This program calculates the area of a rectangle, triangle, and circle.
    It uses separate functions for each shape, validates input, and saves
    the results to a text file as a custom feature.

    Pseudocode:
    1. Show a menu to the user.
    2. Ask for the shape to calculate area.
    3. For each shape, validate input using while loop.
    4. Use functions to calculate area.
    5. Save result in a text file.
    6. Allow user to repeat or exit.

    Reflection:
    Using functions in C++ makes the code more organized and easier to read.
    Each function has one job, like calculating the area of a shape. This
    helps avoid repeating code and makes fixing errors easier. For example,
    I used three functions to calculate the area of a rectangle, triangle,
    and circle. If I had to change the formula later, I would only need to
    change it inside the function. I also learned how to pass values to
    functions and how they return results. Functions make the program look
    more professional and clean.
*/

#include <iostream>      // For input and output
#include <iomanip>       // For formatting output
#include <fstream>       // For file operations
#include <limits>        // For input validation
#include <cmath>         // For math functions (used for circle area)
using namespace std;

// Function prototypes
double calcRectangleArea(double length, double width); // Calculates area of a rectangle
double calcTriangleArea(double base, double height);   // Calculates area of a triangle
double calcCircleArea(double radius);                  // Calculates area of a circle
void saveResultToFile(const string& shape, double area); // Saves results to a file

int main() {
    int choice;      // User's menu choice
    char repeat;     // To allow the user to repeat the process

    // Start with a clean file (clears any previous content)
    ofstream file("AreaResults_JoseFelix.txt");
    file.close();

    do {
        // Display menu
        cout << "\n========== Geometry Area Calculator ==========" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "Choose a shape (1-3): ";

        // Validate menu input
        while (!(cin >> choice) || choice < 1 || choice > 3) {
            cout << "Invalid choice. Please select 1, 2, or 3: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Declare variables for input and results
        double val1, val2, area;
        string shape;

        // Use switch to determine which shape to calculate
        switch (choice) {
        case 1:
            shape = "Rectangle";
            cout << "Enter length: ";
            while (!(cin >> val1) || val1 <= 0) { // Validate length
                cout << "Invalid. Enter a positive number: ";
                cin.clear(); cin.ignore(10000, '\n');
            }
            cout << "Enter width: ";
            while (!(cin >> val2) || val2 <= 0) { // Validate width
                cout << "Invalid. Enter a positive number: ";
                cin.clear(); cin.ignore(10000, '\n');
            }
            area = calcRectangleArea(val1, val2); // Call function
            break;
        case 2:
            shape = "Triangle";
            cout << "Enter base: ";
            while (!(cin >> val1) || val1 <= 0) { // Validate base
                cout << "Invalid. Enter a positive number: ";
                cin.clear(); cin.ignore(10000, '\n');
            }
            cout << "Enter height: ";
            while (!(cin >> val2) || val2 <= 0) { // Validate height
                cout << "Invalid. Enter a positive number: ";
                cin.clear(); cin.ignore(10000, '\n');
            }
            area = calcTriangleArea(val1, val2); // Call function
            break;
        case 3:
            shape = "Circle";
            cout << "Enter radius: ";
            while (!(cin >> val1) || val1 <= 0) { // Validate radius
                cout << "Invalid. Enter a positive number: ";
                cin.clear(); cin.ignore(10000, '\n');
            }
            area = calcCircleArea(val1); // Call function
            break;
        }

        // Show the result
        cout << fixed << setprecision(2);
        cout << shape << " area: " << area << " square units." << endl;

        // Save the result to file
        saveResultToFile(shape, area);

        // Ask the user if they want to calculate again
        cout << "\nWould you like to calculate another area? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    // Exit message
    cout << "\nThanks for using my Area Calculator. Results saved in 'AreaResults_JoseFelix.txt'.\n";
    return 0; // End program
}

// ======== FUNCTION DEFINITIONS ========

// Function to calculate the area of a rectangle
double calcRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calcTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calcCircleArea(double radius) {
    return 3.14159 * radius * radius;
}

// Function to save result to a text file
void saveResultToFile(const string& shape, double area) {
    ofstream file("AreaResults_JoseFelix.txt", ios::app); // Open in append mode
    file << fixed << setprecision(2);
    file << shape << " area: " << area << " square units.\n";
    file.close();
}
