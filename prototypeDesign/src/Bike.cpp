#include "Bike.h"
#include <iostream>
#include <string>

void Bike::display()
{
   std:: cout<<"Bike"<<std::endl;
}

Vehicle* Bike::clone() const{
    return new Bike(*this);
}