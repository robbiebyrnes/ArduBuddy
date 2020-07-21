#include "menuHandler.h"
#include "Battery.h"
#include "Calculations.h"
#include "VoltageDiv.h"
#include "ParallelRes.h"
#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

menuHandler::menuHandler()
{
}

menuHandler::~menuHandler()
{
}


void menuHandler::menuHandler_Menu()
{
    cout << setfill('*') << setw(78) << "*" << endl;
    cout << "******************************Welcome to ArduBuddy****************************"<< endl;
    cout << setfill('*') << setw(78) << "*" << endl << endl;
    cout << "A simple set of handy functions to calculate useful ratings for your builds..." << endl << endl;;
    cout << setfill('*') << setw(78) << "*" << endl;
    cout << "***********************************Main Menu**********************************" << endl;
    cout << setfill('*') << setw(78) << "*" << endl << endl;
    cout << "1. Battery Life Calculator." << endl;
    cout << "2. Single Series LED Resistor Calculator." << endl;
    cout << "3. Simple Voltage Divider Calculator." << endl;
    cout << "4. Two Parallel Resistors - Total Resistance Calculator." << endl;
    cout << "5. Exit the program." << endl << endl;
    cout << "[Enter your choice...]" << endl << endl;
    unsigned int menuChoice;
    cin >> menuChoice;
    if ( menuChoice == 1)
    {
        cout << endl;
        Battery batterylife;
        batterylife.B_Time();
    }
    else if (menuChoice == 2)
    {
        cout << endl;
        Calculations LED;
        LED.Standard_LED_Vf();
        LED.LED_Series_Resistor_Calc();
    }
    else if (menuChoice ==3)
    {
        cout << endl;
        VoltageDiv Simple;
        Simple.simpleVoltDiv();
    }
    else if (menuChoice ==4)
    {
        cout << endl;
        ParallelRes TwoRes;
       	TwoRes.TwoParallelRES();
    }
    else
    {
    	return;
	}
}
