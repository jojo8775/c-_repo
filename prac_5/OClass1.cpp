
#include "OClass1.h"

OClass1::OClass1(){
    this->setPtr_ = std::make_shared<std::set<std::string>>();

    for(int i=0; i<10; i++){
        setPtr_->insert(std::to_string(i));
    }
}

std::set<std::string> OClass1::getSet(){
    return *setPtr_;
}