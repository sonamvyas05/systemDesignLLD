#include "SubmittedState.h"
#include <iostream>

void SubmittedState::publish() {
    std::cout << "Publishing the document from submit state." << std::endl;
}

void SubmittedState::reject() {
    std::cout << "Cannot reject the document in Submit state." << std::endl;
}

void SubmittedState::printState() const {
    std::cout << "Document is in Submit state." << std::endl;
}