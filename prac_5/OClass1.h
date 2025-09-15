#pragma once

#include<iostream>
#include<set>
#include <memory> 

class OClass1{
    public:
    OClass1();
    std::set<std::string> getSet();

    private:
    std::shared_ptr<std::set<std::string>> setPtr_ = nullptr;
};

