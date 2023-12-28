#pragma once

#include "DocumentState.h"

class DraftState : public DocumentState {
public:
    void publish() ;
    void reject() ;
    void printState() const ;
};