#include<iostream>
#include "dog.h"

Dog::Dog(const std::string& name, const std::string& breed, int& age)
    :  breed(breed), name(name), agePtr(new int(age)){
    

    std::cout << "dog created" << std::endl;
}

Dog::~Dog(){
    std::cout << "deleting the dog" << std::endl;
    delete agePtr;
}

std::string Dog::getName(){
    std::cout << "non const getname was called" << std::endl;
    return name;
}

std::string Dog::getName() const{
    std::cout << "const getname was called" << std::endl;
    return name;
}

const std::string& Dog::getNameV2() const{
    std::cout << "const getname was called" << std::endl;

    return name;
}

std::string Dog::getBreed(){
    return breed;
}

int* Dog::getAge(){
    return agePtr;
}