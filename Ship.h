//Brandon Roy 5/1/17

#ifndef SHIP_H
#define SHIP_H

#include <iostream>

class Ship
{
    public:
        Ship();
        Ship(std::string iship, std::string iyear);
        virtual ~Ship();

        std::string getShip();
        std::string getYear();

        void setShip(std::string iship);
        void setYear(std::string iyear);

        virtual void print();

    protected:
        //virtual void print();

    private:
        std::string ship;
        std::string year;
};

#endif // SHIP_H
