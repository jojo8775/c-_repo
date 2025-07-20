#pragma once

#include<iostream>
#include<functional>
#include<typeinfo>
#include<typeindex>
#include<thread>
#include<memory>
#include<map>

class LoggerHelper{
    public: 
    static LoggerHelper& initialize();

    template<typename T>
    void serialize(T logger, std::function<void()>&& callback);

    ~LoggerHelper();
    
    private:
        LoggerHelper();
        std::map<std::type_index, std::unique_ptr<std::mutex>> mutexMap_;
};

#include "LoggerHelper-int.h"

