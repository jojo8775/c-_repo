#pragma once
#include<iostream>

class Cylinder{
    public: 
        Cylinder() = default;
        Cylinder(double radius, double height);
        std::string display();
        double getArea();

    private : 
        double _radius;
        double _height;
};
