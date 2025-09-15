#pragma once 
#include "ParkingLot.h"

template <typename T>
int ParkingLot::getPrice(){

    auto aa = this->getAddress();
    std::cout << "this is from inl.h.  " << aa << std::endl;

    return 10;
};