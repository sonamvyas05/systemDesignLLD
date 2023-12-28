#include "PublishedState.h"
#include <iostream>

void PublishedState::publish() {
    std::cout << "Publishing the document from Publish state." << std::endl;
}

void PublishedState::reject() {
    std::cout << "Cannot reject the document in publish state." << std::endl;
}

void PublishedState::printState() const {
    std::cout << "Document is in publish state." << std::endl;
}