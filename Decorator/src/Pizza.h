#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <string>

class Pizza{
    public:
    virtual std::string getDescription() const =0;
    virtual double getCost() const =0;
};

#endif