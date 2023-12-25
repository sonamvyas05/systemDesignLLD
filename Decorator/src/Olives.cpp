#include "Olives.h"

Olives::Olives(Pizza* pizza) : PizzaDecorator(pizza) {}

std::string Olives::getDescription() const {
    return PizzaDecorator::getDescription() + ", Olives";
}

double Olives::getCost() const {
    return PizzaDecorator::getCost() + 1.5; // Additional cost for olives
}