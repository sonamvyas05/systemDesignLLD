#include <iostream>
#include "BasicPizza.h"
#include "ExtraCheese.h"
#include "Olives.h"

int main() {
    // Creating a basic pizza
    Pizza* myPizza = new BasicPizza();

    // Adding decorators
    myPizza = new ExtraCheese(myPizza);
    myPizza = new Olives(myPizza);

    // Displaying final pizza details
    std::cout << "Description: " << myPizza->getDescription() << std::endl;
    std::cout << "Cost: " << myPizza->getCost() << std::endl;

    return 0;
}