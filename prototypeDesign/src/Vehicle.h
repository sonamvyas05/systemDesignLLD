#ifndef VEHICLE_H
#define VEHICLE_H
class Vehicle {
    public:
        virtual void display() = 0;
        virtual Vehicle* clone() const = 0;

};
#endif // vehicle 