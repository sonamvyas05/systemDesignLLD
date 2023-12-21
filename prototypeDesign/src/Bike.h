#ifndef BIKE_H
#define BIKE_H
#include "Vehicle.h"

class Bike : public Vehicle{
    void display();
    Vehicle* clone() const;
};
#endif // end of car