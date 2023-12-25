#include "PizzaDecorator.h"

PizzaDecorator::PizzaDecorator(Pizza* pizza) : pizza(pizza) {}

std::string PizzaDecorator::getDescription() const {
    return pizza->getDescription();
}

double PizzaDecorator::getCost() const {
    return pizza->getCost();
}