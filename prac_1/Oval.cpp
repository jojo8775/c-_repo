
#include<iostream>
#include "Sphere.h"
#include "Oval.h"

Oval::Oval(std::string label)
:Sphere(std::move(label)){
}

std::string Oval::info(){
    return "Oval:: this is in the oval";
}