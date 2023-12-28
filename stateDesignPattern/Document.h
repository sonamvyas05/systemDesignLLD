#ifndef DOCUMENT
#define DOCUMENT
#include "DocumentState.h"
//context class which will maintain an instance of concrete state which state is set currently.
class Document {
    private:
    DocumentState* currentState;

    public:
    Document();
    ~Document();
    void setState(DocumentState* currentState);
    void publish();
    void reject();
};





#endif