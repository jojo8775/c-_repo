#include <iostream>
#include <set>
#include "OClass1.h"

std::set<std::string> getSetFromObj();

int main(){
    std::cout << "hello" << std::endl;

    auto val = getSetFromObj();

    for(auto n : val){
        std::cout << n << std::endl;
    }
}

std::set<std::string> getSetFromObj(){
    OClass1 obj;

    return obj.getSet();
}