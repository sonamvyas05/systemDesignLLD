#include "FileLeaf.h"
#include <iostream>

FileLeaf::FileLeaf(const std::string& name) : name(name){}
std::string FileLeaf::getName() const{
    return name;
}

void FileLeaf::display() const{
    std::cout <<"File: " << name <<std::endl;
}