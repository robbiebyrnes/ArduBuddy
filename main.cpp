//#include <windows.h>
#include "menuHandler.h"
#include "Calculations.h"
#include "Battery.h"
#include "VoltageDiv.h"
#include "ParallelRes.h"
#include <iostream>


using namespace std;


menuHandler mainMenu;


int main()
{
//	HWND console = GetConsoleWindow();
//	RECT r;
//  	GetWindowRect(console, &r); //stores the console's current dimensions
//
//	//MoveWindow(window_handle, x, y, width, height, redraw_window);
//  	MoveWindow(console, r.left, r.top, 800, 600, TRUE);
// 	for (int j = 0; j < 100; ++j)
//   		{
//     		for (int i = 0x41; i < 0x5B; ++i)
//        	cout << (char)i;
//    	}
//  	cout << endl;
//  	Sleep(1000);
//  	MoveWindow(console, r.left, r.top, r.right - r.left, r.bottom - r.top, TRUE);
//  
	
    mainMenu.menuHandler_Menu();
    
    
    
    return 0;
}

