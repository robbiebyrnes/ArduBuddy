#ifndef Calculations_H
#define Calculations_H
#pragma once


class Calculations
{
    friend class menuHandler;
    public:
        Calculations();
        void Standard_LED_Vf();
        void Resistor_Values();
        void LED_Series_Resistor_Calc();
        virtual ~Calculations();
        float Vs; // Vs
        float Vf; // Vf
        float RESISTANCE; // R
        float CURRENT; // I

    protected:

    private:
        float Vl; // remaining voltage after voltage drop
        unsigned int calculationsMenu_internal;
};

#endif // Calculations_H



