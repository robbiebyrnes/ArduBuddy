#include "Battery.h"
#include <iostream>
#include <iomanip>
#include "menuHandler.h"

using namespace std;

Battery::Battery()
{
}

Battery::~Battery()
{
}

void Battery::B_Time()
{
    cout << setfill('*') << setw(78) << "*" << endl;
    cout << "****************************Battery Life Calculator***************************" << endl;
    cout << setfill('*') << setw(78) << "*" << endl << endl;
    cout << "Total your projects Load current and check your battery's rating in Amp Hours" << endl;
    cout << "or milliAmp Hours before beginning..." << endl << endl;;
    cout << "Enter whether or not using Amps or milliAmps for the calculation: " << endl << endl;
    cout << "[Enter 0] for Amps (A) or [Enter 1] for milliAmps (mA): " << endl << endl;;
    cin >> batteryMenu;
    if (batteryMenu == 0)
        {
            cout << "Enter Battery capacity in Amp Hours (Ah): " << endl;
            cin >> batteryCapacity_Ah;
            cout << "Enter the Load Current in Amps (A): " << endl;
            cin >> loadCurrent_A;
            batteryLife=batteryCapacity_Ah/loadCurrent_A;
            cout << "The battery life in hours with this current draw is: " << batteryLife << "Hours" << endl << endl;
        }
    else
        {
            cout << "Enter Battery capacity in milliAmp Hours (mAh): " << endl;
            cin >> batteryCapacity_mAh;
            cout << "Enter the Load Current in milliAmps (mA): " << endl;
            cin >> loadCurrent_mA;
            batteryLife=batteryCapacity_mAh/loadCurrent_mA;
            cout << "The battery life in hours with this current draw is: " << batteryLife << "Hours" << endl << endl;
        }
    cout << "[Enter 0] to return to Battery Life Menu or [Enter 1] to return to main menu: " << endl;
    cin >> batteryMenu_internal;
    cout << endl;
    if (batteryMenu_internal == 0)
        {
            Battery::B_Time();
        }
    else
        {
            menuHandler MAIN;
            MAIN.menuHandler_Menu();
        }
}
