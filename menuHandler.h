#ifndef MENUHANDLER_H
#define MENUHANDLER_H
#include "Calculations.h"
#include "Battery.h"
#include "VoltageDiv.h"
#include "ParallelRes.h"



class menuHandler
{
    friend class Battery;
    friend class Calculations;
    friend class VoltageDiv;
    friend class ParallelRes;
    
    public:
        menuHandler();
        virtual ~menuHandler();
        void menuHandler_Menu();

        
    protected:

    private:

};

#endif // MENUHANDLER_H
