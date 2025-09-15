#include"ParkingLot.h"

std::string ParkingLot::getAddress(){
    return "demo address";
}

int ParkingLot::getCapacity(){
    auto add = this->getAddress();

    std::cout << add << std::endl;
    return 10;
}
