#ifndef FILECOMPONENT_H
#define FILECOMPONENT_H
#include<string>

class FileComponent{
    public:
    virtual std::string getName() const =0;
    virtual void display() const = 0;
};





#endif