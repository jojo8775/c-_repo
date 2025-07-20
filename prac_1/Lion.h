
#pragma once 

#include<iostream>
#include "Animal.h"

class Lion : public Animal{
    public:
        Lion(std::string label);

        bool virtual canFly() override;
        bool virtual canSwim() override;
        bool virtual canRun() override;
};