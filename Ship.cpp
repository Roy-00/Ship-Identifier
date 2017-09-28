//Brandon Roy 5/1/17

#include "Ship.h"

Ship::Ship(){
    ship = "Unavailable";
    year = "Unavailable";
}
Ship::Ship(std::string iship, std::string iyear){
    ship = iship;
    year = iyear;
}
Ship::~Ship(){
    //dtor
}
//*******************************************************************************************************************
std::string Ship::getShip(){
    return ship;
}
std::string Ship::getYear(){
    return year;
}
//*******************************************************************************************************************
void Ship::setShip(std::string iship){
    ship = iship;
}
void Ship::setYear(std::string iyear){
    year = iyear;
}
//*******************************************************************************************************************
void Ship::print(){
    std::cout << "Ship Name: " << ship << std::endl;
    std::cout << "Year Ship Built: " << year << std::endl << std::endl;
}
