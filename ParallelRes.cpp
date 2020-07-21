#include "ParallelRes.h"
#include "menuHandler.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Rt = (R1 * R2) / (R1 + R2)

ParallelRes::ParallelRes()
{
}

ParallelRes::~ParallelRes()
{
}

void ParallelRes::TwoParallelRES()
{
    cout << setfill('*') << setw(78) << "*" << endl;
    cout << "**************2 Parallel Resistors - Total Resistance Calculator**************" << endl;
    cout << setfill('*') << setw(78) << "*" << endl << endl;
    cout << "A simple calculator to find the total resistance by place 2 resistors" << endl;
    cout << "in parallel using a product-over-sum calculation Rt = (R1 * R2) / (R1 + R2)" << endl << endl;
    cout << "Enter the valule in Ohms of Resistor 1 (R1): " << endl;
    cin >> R1;
    cout << "Enter the valule in Ohms of Resistor 2 (R2): " << endl;
    cin >> R2;
    Rt = (R1 * R2)/(R1 +R2);
    cout << "The total resistance of this parallel circuit is: " <<  Rt << endl;
    cout << "[Enter 0] to return to perform another parallel resistor calculation or [Enter 1]" << endl;
    cout << "to return to the main menu." << endl;
    cin >> parResMenu_internal;
    cout << endl;
    if (parResMenu_internal == 0)
        {
            ParallelRes::TwoParallelRES();
        }
    else if (parResMenu_internal == 1)
        {
            menuHandler MAIN;
            MAIN.menuHandler::menuHandler_Menu();
        }
}
