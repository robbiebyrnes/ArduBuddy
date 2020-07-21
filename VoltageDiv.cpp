#include "VoltageDiv.h"
#include <iostream>
#include <iomanip>
#include "menuHandler.h"

using namespace std;

// Vout = (Vs / (R1 + R2)) * R2
// Vout = (Vs * R2) / (R1 + R2)
// Vout = Vs * (R2/R1 + R2)

VoltageDiv::VoltageDiv()
{
}

VoltageDiv::~VoltageDiv()
{
}

void VoltageDiv::simpleVoltDiv()
{
  // R2 = (Vout * R1)/(Vs-Vout)
    cout << setfill('*') << setw(78) << "*" << endl;
    cout << "**************************Find R2 for voltage divider*************************" << endl;
    cout << setfill('*') << setw(78) << "*" << endl << endl;
    cout << "You will need to know your supply voltage, your desired output voltage and to" << endl;
    cout << "enter a value for R1 to solve the equation" << endl << endl;
    cout << "Enter the supply voltage (Vs) as a float/Int: " << endl;
    cin >> Vs;
    cout << "Enter the desired voltage out of the divider circuit as a float/Int: " << endl;
    cin >> Vout;
    cout << "Enter the resistor value for R1 in Ohms as an integer: " << endl;
    cin >> R1;
    R2 = (Vout * R1)/(Vs-Vout);
    cout << "The resistor R2 value you require for your desired output voltage (using the value" << endl;
    cout << "for R1 you specified, is: " << R2 << " Ohms." << endl << endl;
    cout << "[Enter 0] to return to perform another voltage division calculation or [Enter 1]" << endl;
    cout << "to return to the main menu." << endl;
    cin >> voltageDivMenu_internal;
    cout << endl;
    if (voltageDivMenu_internal == 0)
        {
            VoltageDiv::simpleVoltDiv();
        }
    else if (voltageDivMenu_internal == 1)
        {
            menuHandler MAIN;
            MAIN.menuHandler_Menu();
        }
}
