
#include "Shape.h"

Shape::Shape(std::string label)
    :label(label){   
}

std::string Shape::info(){
    return "this is shape class";
}

std::string Shape::getLabel(){
    return label;
}