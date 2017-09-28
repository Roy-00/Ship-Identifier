//Brandon Roy 5/1/17

#include "CargoShip.h"

CargoShip::CargoShip(){
    setShip("Unavailable");
    capacity = 0;
}/*
CargoShip::CargoShip(std::string iship, int capacity){
    ship = iship;
    capacity = capacity;
}*/
CargoShip::CargoShip(std::string iship, std::string iyear, int imax) : Ship(iship, iyear){
    capacity = imax;
}
CargoShip::~CargoShip(){
    //dtor
}
//*******************************************************************************************
void CargoShip::set_capacity(int icapacity){
    capacity = icapacity;
}
int CargoShip::get_capacity(){
    return capacity;
}
//*******************************************************************************************
void CargoShip::print(){
    std::cout << "Ship Name: " << getShip() << std::endl;
    std::cout << "Maximum Cargo Capacity of Ship: " << capacity << " units" << std::endl << std::endl;
}
