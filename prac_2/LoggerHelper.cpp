#include <iostream>
#include<map>
#include "LoggerHelper.h"
#include "Logger.h"
#include <mutex>

//std::map<std::type_index, std::unique_ptr<std::mutex>> LoggerHelper::mutexMap_;

LoggerHelper::LoggerHelper(){
    // static auto ll = std::mutex();
    // std::lock_guard<std::mutex> lock(ll);

    std::cout << "creating the logger helper singleton" << std::endl;

    if(mutexMap_.size() == 0){
        std::cout << "initializing mutex map" << std::endl;
        mutexMap_.emplace(typeid(Logger), std::make_unique<std::mutex>());
    }
    else{
        std::cout << "initializing of mutex map is skipped" << std::endl;
    }
}

LoggerHelper::~LoggerHelper(){
    std::cout << "LoggerHelper destructor called" << std::endl;
}

LoggerHelper& LoggerHelper::initialize(){
    static LoggerHelper instance;
    return instance;
}




