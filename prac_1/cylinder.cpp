#include<iostream>
#include "constants.h"
#include "constants.h"
#include "cylinder.h"


Cylinder::Cylinder(double radius, double height){
    _radius = radius;
    _height = height;
}

std::string Cylinder::display(){
    return "cylinder";
}

double Cylinder::getArea(){
    return _radius * _height * prac1::PI;
}



// int main(){
//     Cylinder c1(10, 4);

//     std::cout << "display: " << c1.display() << "   area: " << c1.getArea() << std::endl;
// }