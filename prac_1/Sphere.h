#pragma once

#include<iostream>
#include "Shape.h"

class Sphere : public Shape{
    public:
        Sphere(std::string label);
        
        virtual std::string info() override;
};   
