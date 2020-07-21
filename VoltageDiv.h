#ifndef VOLTAGEDIV_H
#define VOLTAGEDIV_H
#pragma once


class VoltageDiv
{
    friend class menuHandler;
    public:
        VoltageDiv();
        virtual ~VoltageDiv();
        void simpleVoltDiv();
        float Vs; //inputVoltage
        float Vout; // outputVoltage
        int R1;
        int R2;

    protected:

    private:
        int voltageDivMenu_internal;
};

#endif // VOLTAGEDIV_H
