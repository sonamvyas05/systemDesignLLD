#include "VehicleProtype.h"
#include <iostream>

int main()
{
   VehiclePrototype proto;
   Vehicle* car1 = proto.createVehicle("Car");
   Vehicle* car2 = proto.createVehicle("Car");
   Vehicle* bike1 = proto.createVehicle("Bike");
   Vehicle* bike2 = proto.createVehicle("Bike");

   car1->display();
   car2->display();
   bike1->display();
   bike2->display();

   delete car1;
    delete bike1;
    delete car2;
    delete bike2;
  return 0;

}