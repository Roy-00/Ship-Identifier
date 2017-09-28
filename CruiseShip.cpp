//Brandon Roy 5/1/17

#include "CruiseShip.h"

CruiseShip::CruiseShip(){
    setShip("Unavailable");
    max_passangers = 0;
}/*
CruiseShip::CruiseShip(std::string iship, int imax){
    ship = iship;
    max_passangers = imax;
}*/
CruiseShip::CruiseShip(std::string iship, std::string iyear, int imax) : Ship(iship, iyear){
    max_passangers = imax;
}
CruiseShip::~CruiseShip(){
    //dtor
}
//***********************************************************************************************
void CruiseShip::setMax_Passangers(int imax){
    max_passangers = imax;
}
int CruiseShip::getMax_Passangers(){
    return max_passangers;
}
//***********************************************************************************************
void CruiseShip::print(){
    std::cout << "Ship Name: " << getShip() << std::endl;
    std::cout << "Maximum Passengers on Ship: " << max_passangers << " passengers" << std::endl << std::endl;
}
