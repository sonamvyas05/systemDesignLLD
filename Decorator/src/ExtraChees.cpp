#include "ExtraCheese.h"

ExtraCheese::ExtraCheese(Pizza* pizza) : PizzaDecorator(pizza) {}

std::string ExtraCheese::getDescription() const {
    return PizzaDecorator::getDescription() + ", Extra Cheese";
}

double ExtraCheese::getCost() const {
    return PizzaDecorator::getCost() + 2.0; // Additional cost for extra cheese
}