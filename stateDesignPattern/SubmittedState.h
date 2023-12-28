#pragma once

#include "DocumentState.h"

class SubmittedState : public DocumentState {
public:
    void publish() ;
    void reject() ;
    void printState() const ;
};