
#include<iostream>
#include "Sphere.h"

Sphere::Sphere(std::string label)
: Shape(std::move(label)){
}

std::string Sphere::info(){
    return "Sphere:: this is the sphere info";
}