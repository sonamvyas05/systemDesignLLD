#include "VehicleProtype.h"
#include "Car.h"
#include "Bike.h"

VehiclePrototype::VehiclePrototype(){
    prototype["Car"] = new Car();
    prototype["Bike"] = new Bike();
}

Vehicle* VehiclePrototype::createVehicle(std::string type)
{
   if(prototype.find(type) != prototype.end())
   {
      return prototype.at(type)->clone();
   }
   return nullptr;
}

VehiclePrototype::~VehiclePrototype() {
    for (auto& entry : prototype) {
        delete entry.second;
    }
    prototype.clear();
}