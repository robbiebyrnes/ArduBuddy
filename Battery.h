#ifndef BATTERY_H
#define BATTERY_H
#pragma once


class Battery
{
    friend class menuHandler;
    public:
        Battery();
        virtual ~Battery();
        void B_Time();

    protected:

    private:
        int batteryMenu;
        int batteryMenu_internal;
        unsigned int batteryCapacity_Ah;
        unsigned int batteryCapacity_mAh;
        float loadCurrent_A;
        unsigned int loadCurrent_mA;
        float batteryLife;
};

#endif // BATTERY_H
