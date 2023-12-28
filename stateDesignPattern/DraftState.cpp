#include "DraftState.h"
#include <iostream>

void DraftState::publish() {
    std::cout << "Publishing the document from Draft state." << std::endl;
}

void DraftState::reject() {
    std::cout << "Cannot reject the document in Draft state." << std::endl;
}

void DraftState::printState() const {
    std::cout << "Document is in Draft state." << std::endl;
}