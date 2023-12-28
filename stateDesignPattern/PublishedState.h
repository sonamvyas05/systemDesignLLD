#pragma once

#include "DocumentState.h"

class PublishedState : public DocumentState {
public:
    void publish() ;
    void reject() ;
    void printState() const ;
};