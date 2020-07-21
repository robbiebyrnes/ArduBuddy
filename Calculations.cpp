#include "Calculations.h"
#include "menuHandler.h"
#include <iostream>
#include <iomanip>

using namespace std;

Calculations::Calculations()
{
}

Calculations::~Calculations()
{
}

void Calculations::Standard_LED_Vf()
{
    cout << setfill('*') << setw(78) << "*" << endl;
    cout << "*******************Single Series Resistor for LED Calculator******************" << endl;
    cout << setfill('*') << setw(78) << "*" << endl << endl;
    cout << "Common ranges for LED forward voltage (Vf) based on colour: " << endl;
    cout << "Always refer to the datasheet if you have access to it, otherwise use" << endl;
    cout << "the following values as a guide..." << endl;
    cout << setfill(' ') << setw(40) << "Red LED = 1.8 - 2.1" << endl;
    cout << setw(40) << "Amber LED = 2.0 - 2.2" << endl;
    cout << setw(40) << "Orange LED = 1.9 - 2.2" << endl;
    cout << setw(40) << "Green LED = 2.0 - 3.1" << endl;
    cout << setw(40) << "Blue LED = 3.0 - 3.7" << endl;
    cout << setw(40) << "White LED = 3.0 - 3.4" << endl << endl;;
}

void Calculations::LED_Series_Resistor_Calc()
{
    // R = VsVf
    cout << "Enter the supply voltage (Vs) as Float/Int: " << endl;
    cin >> Vs;
    cout << "Enter the forward voltage of the LED: " << endl;
    cin >> Vf;
    cout << "Enter the desired current through the LED in mA: " << endl;
    cin >> CURRENT;
    CURRENT = CURRENT/1000;
    cout << "The resistance value for a single series resistor is: ";
    Vl = Vs - Vf;
    RESISTANCE = Vl/CURRENT;
    cout << RESISTANCE << " Ohms. Use the next highest value of resistor." << endl << endl;
    cout << endl;
    Resistor_Values();
    cout << "[Enter 1] to return to main menu: " << endl;
    cin >> calculationsMenu_internal;
    cout << endl;
    if (calculationsMenu_internal == 1)
        {
            menuHandler MAIN;
            MAIN.menuHandler_Menu();
        }
}

void Calculations::Resistor_Values()
{
   std::cout << "1" << std::endl;
   std::cout << "1.1" << std::endl;
   std::cout << "1.2" << std::endl;
   std::cout << "1.3" << std::endl;
   std::cout << "1.4" << std::endl;
   std::cout << "1.5" << std::endl;
   std::cout << "1.6" << std::endl;
   std::cout << "1.8" << std::endl;
   std::cout << "2" << std::endl;
   std::cout << "2.2" << std::endl;
   std::cout << "2.4" << std::endl;
   std::cout << "2.7" << std::endl;
   std::cout << "3" << std::endl;
   std::cout << "3.3" << std::endl;
   std::cout << "3.6" << std::endl;
   std::cout << "3.9" << std::endl;
   std::cout << "4.3" << std::endl;
   std::cout << "4.7" << std::endl;
   std::cout << "5.1" << std::endl;
   std::cout << "5.6" << std::endl;
   std::cout << "6.2" << std::endl;
   std::cout << "6.8" << std::endl;
   std::cout << "7.5" << std::endl;
   std::cout << "8.2" << std::endl;
   std::cout << "9.1" << std::endl;
}
