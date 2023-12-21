#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle{
    void display();
    Vehicle* clone() const;
};
#endif // end of car