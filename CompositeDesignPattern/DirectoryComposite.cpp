#include "DirectoryComposite.h"
#include <iostream>

DirectoryComposite::DirectoryComposite(const std:: string & name) : name(name){}

std::string DirectoryComposite::getName() const {
    return name;
}

void DirectoryComposite::display() const {
    std::cout << "Directory: " << name << std::endl;
    for (const auto& component : components) {
        component->display();
    }
}

void DirectoryComposite::addComponent(FileComponent* component) {
    components.push_back(component);
}

 