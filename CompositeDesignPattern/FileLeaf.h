#ifndef FILELEAF_H
#define FILELEAF_H
#include "FileComponent.h"

class FileLeaf : public FileComponent{
    public:
       FileLeaf(const std::string& name);
       std::string getName() const;
       void display() const;
    private:
    std::string name;
};

#endif