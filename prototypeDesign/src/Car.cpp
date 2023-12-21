#include "Car.h"
#include <iostream>
#include <string>

void Car::display()
{
   std:: cout<<"Car"<<std::endl;
}

Vehicle* Car::clone() const{
    return new Car(*this);
}