#include "car.h"
#include <iostream>

Car::Car(std::string make, std::string model)
:make(make), model(model){
    std::cout << "Car constructor called for make: " << this->make << "   model: " << this->model << std::endl;
}

Car::~Car(){
    std::cout << "Car destructor called for make: " << this->make << "   model: " << this->model << std::endl;
}

std::string Car::getMake(){
    return make;
}

std::string Car::getModel(){
    return model;
}
