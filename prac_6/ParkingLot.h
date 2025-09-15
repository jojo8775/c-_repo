#pragma once
#include<iostream>

class ParkingLot{
    public: 
        std::string getAddress();
        int getCapacity();

        template <typename T>
        int getPrice();
};

#include "ParkingLot-inl.h"