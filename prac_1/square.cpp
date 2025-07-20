#include "square.h"

Square::Square(double length) : Square(length, length)
{
}

Square::Square(double length, double breadth)
:length(length), breadth(breadth){

}

Square::~Square(){

}

double Square::getArea() const{
    return length * breadth;
}
