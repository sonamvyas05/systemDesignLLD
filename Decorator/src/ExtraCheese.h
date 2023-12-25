#ifndef EXTRA_CHEESE_H
#define EXTRA_CHEESE_H

#include "PizzaDecorator.h"

// Concrete Decorator - ExtraCheese
class ExtraCheese : public PizzaDecorator {
public:
    ExtraCheese(Pizza* pizza);
    std::string getDescription() const ;
    double getCost() const ;
};

#endif // EXTRA_CHEESE_H
