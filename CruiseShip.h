//Brandon Roy 5/1/17

#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"
#include <iostream>

class CruiseShip : public Ship{
    public:
        CruiseShip();
        //CruiseShip(std::string iship, int imax);
        CruiseShip(std::string iship, std::string iyear, int imax);
        virtual ~CruiseShip();

        void setMax_Passangers(int imax);
        int getMax_Passangers();

        void print();

    protected:

    private:
        //Ship::ship;
        //Ship::year;
        int max_passangers;
};

#endif // CRUISESHIP_H
