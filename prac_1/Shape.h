#pragma once 

#include<iostream>

class Shape{
    public: 
        Shape(std::string label);

        virtual std::string info();
        std::string getLabel();

    private:
        std::string label;
};
