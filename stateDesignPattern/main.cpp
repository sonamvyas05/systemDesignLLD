#include "Document.h"
#include "DraftState.h"
#include "SubmittedState.h"
#include "PublishedState.h"

int main() {
    Document document;

    document.publish(); 
    document.reject();  

    document.setState(new SubmittedState());
    document.publish(); 
    document.reject(); 

    document.setState(new PublishedState());
    document.publish(); 
    document.reject();  

    return 0;
}