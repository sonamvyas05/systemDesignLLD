#ifndef DOCUMENTSTATE_H
#define DOCUMENTSTATE_H
#include<iostream>

//abstract State
class DocumentState {
    public:
    virtual void publish() = 0;
    virtual void reject() = 0;
    virtual void printState() const = 0;
};
#endif

