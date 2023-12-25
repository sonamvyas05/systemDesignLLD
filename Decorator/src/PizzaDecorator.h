#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "Pizza.h"

class PizzaDecorator : public Pizza {
    public:
    PizzaDecorator(Pizza* pizza);
    std::string getDescription() const ;
    double getCost() const ;

    private:
    Pizza* pizza;
};





#endif