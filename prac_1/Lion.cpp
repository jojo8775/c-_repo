
#include<iostream>
#include "Lion.h"
//#include "Animal.h"

class Animal;

Lion::Lion(std::string label):Animal(std::move(label)){};

bool Lion::canFly() {return false;}
bool Lion::canRun() {return true;}
bool Lion::canSwim() {return true;}
