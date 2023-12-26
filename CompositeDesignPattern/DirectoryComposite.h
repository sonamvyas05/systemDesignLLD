#ifndef DIRECTORYCOMPOSITE_H
#define DIRECTORYCOMPOSITE_H
#include "FileComponent.h"
#include <vector>

class DirectoryComposite : public FileComponent{
    public:
    DirectoryComposite(const std::string& name);
    std::string getName() const;
    void display() const;
    void addComponent(FileComponent* component);


    private:
    std::string name;
    std::vector<FileComponent*> components;
};






#endif