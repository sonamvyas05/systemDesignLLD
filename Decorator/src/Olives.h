#ifndef OLIVES_H
#define OLIVES_H

#include "PizzaDecorator.h"

// Concrete Decorator - Olives
class Olives : public PizzaDecorator {
public:
    Olives(Pizza* pizza);
    std::string getDescription() const ;
    double getCost() const;
};

#endif // OLIVES_H
