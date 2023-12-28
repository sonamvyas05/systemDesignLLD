#include "Document.h"
#include "DocumentState.h"
#include "DraftState.h"

Document::Document() : currentState(new DraftState()) {}

Document::~Document() {
    delete currentState;
}

void Document::setState(DocumentState* state) {
    delete currentState;
    currentState = state;
    currentState->printState();
}

void Document::publish() {
    currentState->publish();
}

void Document::reject() {
    currentState->reject();
}