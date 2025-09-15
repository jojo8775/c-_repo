#include<iostream>
#include"ParkingLot.h"
#include"Rectriangle.h"
#include "Square.h"
#include<memory>

int main(){
    std::cout << "hello" << std::endl;

    // ParkingLot lot;
    // //lot.getCapacity();
    // lot.getPrice<std::string>();

    std::shared_ptr<Shapes> rec = std::make_shared<Rectriangle>();
    std::shared_ptr<Shapes> square = std::make_shared<Square>();

    std::cout << rec->getShapeType() << std::endl;
    std::cout << square->getShapeType() << std::endl;
}

