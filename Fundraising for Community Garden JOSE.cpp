#include <iostream>
#include <iomanip> // To format the output in dollars
#include <string> 
using namespace std;

int main() {
    // Project: Fundraising for Community Garden
    // Name: Jose Felix
    // Class: 2025SP Intro to Computer Sci/OOP (CSC-120-WB)
    // Date: 3/2/2025

    // Pseudocode:
    // 1. Ask for the user's full name
    // 2. Ask for the hours worked each day, ensuring validation
  
    // 3. Calculate money earned each day and sum up totals
    // 4. Calculate the average money earned per day
    // 5. Determine how many shovels can be purchased
    // 6. Display the results

    // NOTE: The variable names are in Spanish HAHA XD sorry

    string nombre;
    double horasDia1, horasDia2, horasDia3, horasDia4, horasDia5, horasDia6, horasDia7;
    double horasDia8, horasDia9, horasDia10, horasDia11, horasDia12, horasDia13, horasDia14;
    double totalHoras = 0, totalDinero = 0;
    const double TARIFA_POR_MEDIA_HORA = 2.75;
    const double PRECIO_PALA = 10.50; // Hypothetical price of a shovel 
    const int horasday = 24; 

    // Ask for the user's name
    cout << "Enter your full name: ";
    getline(cin, nombre);

    // Ask the user to enter hours for day 1
    cout << "Enter the hours worked on day 1: ";
    cin >> horasDia1;
    // Check if the input is invalid (non-numeric input or negative number)
    if (cin.fail() || horasDia1 < 0 || horasDia1 >  horasday) {
        cin.clear(); // Reset the input state
        cin.ignore(10000, '\n'); // Ignore invalid input characters
        cout << "Invalid input. Setting hours to 0 for day 1.\n";
        horasDia1 = 0; // Assign default value
    }

    // Ask the user to enter hours for day 2
    cout << "Enter the hours worked on day 2: ";
    cin >> horasDia2;
    if (cin.fail() || horasDia2 < 0 || horasDia2 >  horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 2.\n";
        horasDia2 = 0;
    }

    // Ask the user to enter hours for day 3
    cout << "Enter the hours worked on day 3: ";
    cin >> horasDia3;
    if (cin.fail() || horasDia3 < 0 || horasDia3 >  horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 3.\n";
        horasDia3 = 0;
    }

    // Ask the user to enter hours for day 4
    cout << "Enter the hours worked on day 4: ";
    cin >> horasDia4;
    if (cin.fail() || horasDia4 < 0 || horasDia4 >  horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 4.\n";
        horasDia4 = 0;
    }

    // Ask the user to enter hours for day 5
    cout << "Enter the hours worked on day 5: ";
    cin >> horasDia5;
    if (cin.fail() || horasDia5 < 0 || horasDia5 >  horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 5.\n";
        horasDia5 = 0;
    }

    // Ask the user to enter hours for day 6
    cout << "Enter the hours worked on day 6: ";
    cin >> horasDia6;
    if (cin.fail() || horasDia6 < 0 || horasDia6 >  horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 6.\n";
        horasDia6 = 0;
    }

    // Ask the user to enter hours for day 7
    cout << "Enter the hours worked on day 7: ";
    cin >> horasDia7;
    if (cin.fail() || horasDia7 < 0 || horasDia7 >  horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 7.\n";
        horasDia7 = 0;
    }

    // Ask the user to enter hours for day 8
    cout << "Enter the hours worked on day 8: ";
    cin >> horasDia8;
    if (cin.fail() || horasDia8 < 0 || horasDia8 > horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 8.\n";
        horasDia8 = 0;
    }

    // Ask the user to enter hours for day 9
    cout << "Enter the hours worked on day 9: ";
    cin >> horasDia9;
    if (cin.fail() || horasDia9 < 0 || horasDia9 > horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 9.\n";
        horasDia9 = 0;
    }

    // Ask the user to enter hours for day 10
    cout << "Enter the hours worked on day 10: ";
    cin >> horasDia10;
    if (cin.fail() || horasDia10 < 0 || horasDia10 > horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 10.\n";
        horasDia10 = 0;
    }

    // Ask the user to enter hours for day 11
    cout << "Enter the hours worked on day 11: ";
    cin >> horasDia11;
    if (cin.fail() || horasDia11 < 0 || horasDia11 > horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 11.\n";
        horasDia11 = 0;
    }

    // Ask the user to enter hours for day 12
    cout << "Enter the hours worked on day 12: ";
    cin >> horasDia12;
    if (cin.fail() || horasDia12 < 0 || horasDia12 > horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 12.\n";
        horasDia12 = 0;
    }

    // Ask the user to enter hours for day 13
    cout << "Enter the hours worked on day 13: ";
    cin >> horasDia13;
    if (cin.fail() || horasDia13 < 0 || horasDia13 > horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 13.\n";
        horasDia13 = 0;
    }

    // Ask the user to enter hours for day 14
    cout << "Enter the hours worked on day 14: ";
    cin >> horasDia14;
    if (cin.fail() || horasDia14 < 0 || horasDia14 > horasday) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Setting hours to 0 for day 14.\n";
        horasDia14 = 0;
    }


    // Sum totals
    totalHoras = horasDia1 + horasDia2 + horasDia3 + horasDia4 + horasDia5 + horasDia6 + horasDia7 +
        horasDia8 + horasDia9 + horasDia10 + horasDia11 + horasDia12 + horasDia13 + horasDia14;

    // Calculate total money earned
    totalDinero = (totalHoras / 0.5) * TARIFA_POR_MEDIA_HORA;

    // Calculate daily average money earned
    double promedioDiario = totalDinero / 14;

    // Calculate how many shovels can be purchased
    int palasCompradas = static_cast<int>(totalDinero / PRECIO_PALA);

    // Display results
    cout << fixed << setprecision(2);
    cout << "\n========== Work Summary ==========" << endl;
    cout << "Name: " << nombre << endl;
    cout << "Total hours worked: " << totalHoras << " hours" << endl;
    cout << "Total money raised: $" << totalDinero << endl;
    cout << "Average money earned per day: $" << promedioDiario << endl;
    cout << "Number of shovels that can be purchased: " << palasCompradas << endl;
    cout << "========================================\n";

    // NOTE: The variable names are in Spanish HAHA. I know, I'm a Spanish speaker, that's why! HAHAHA JOSE

    return 0;
}
