#pragma once

#include<iostream>
#include"Sphere.h"

class Oval : public Sphere{
    public:
        Oval(std::string label);
        virtual std::string info() override;
};