#ifndef BASICPIZZA_H
#define BASICPIZZA_H
#include <iostream>
#include <string>
#include "Pizza.h"

class BasicPizza: public Pizza{
    public:
    std::string getDescription() const;
    double getCost() const;
};

#endif