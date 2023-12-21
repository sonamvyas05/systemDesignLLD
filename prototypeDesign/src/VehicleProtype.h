#ifndef VEHICLEPROTOTYPE_H
#define VEHICLEPROTOTYPE_H
#include<unordered_map>
#include "Vehicle.h"

class VehiclePrototype {
    private:
       std::unordered_map<std::string,Vehicle*> prototype;
    public:
       VehiclePrototype();
       Vehicle* createVehicle(std::string type);
       ~VehiclePrototype();

};
#endif // end of car