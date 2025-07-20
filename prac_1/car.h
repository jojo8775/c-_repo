#pragma once

#include<iostream>

class Car{
    public: 
        explicit Car(std::string make, std::string model);
        ~Car();

        std::string getMake();
        std::string getModel();

    private: 
        std::string make;
        std::string model;
};

