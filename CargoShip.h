//Brandon Roy 5/1/17

#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"

class CargoShip : public Ship{
    public:
        CargoShip();
        //CargoShip(std::string iship, int capacity);
        CargoShip(std::string iship, std::string iyear, int imax);
        virtual ~CargoShip();

        void set_capacity(int icapacity);
        int get_capacity();

        void print();

    protected:

    private:
        //Ship::ship;
        //Ship::year;
        int capacity;
};

#endif // CARGOSHIP_H
