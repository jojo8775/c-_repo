#pragma once

#include<iostream>

class Animal{
    public:
        Animal(std::string lable){
            this->label = label;
        }
        
        bool virtual canFly()=0;
        bool virtual canSwim()=0;
        bool virtual canRun()=0;

    private: 
        std::string label;
};