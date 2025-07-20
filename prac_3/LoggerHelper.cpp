#include "LoggerHelper.h"
#include "Logger.h"

LoggerHelper::LoggerHelper(){
    std::cout << "Creating a singleton LoggerHelper" << std::endl;
    mutexMap_.emplace(typeid(Logger), std::make_unique<std::mutex>());
}

LoggerHelper& LoggerHelper::getInstance(){
    static LoggerHelper instance;
    return instance;
}