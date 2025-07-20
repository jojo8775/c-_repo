#pragma once

#include<iostream>
#include<functional>
#include<mutex>
#include<typeindex>
#include<map>


class LoggerHelper{
    public: 
        static LoggerHelper& getInstance();

        template<typename T>
        void serialize(T logger, std::function<void()>&& callBack);

    private:
        LoggerHelper();
        std::map<std::type_index, std::unique_ptr<std::mutex>> mutexMap_;
};

#include "LoggerHelper-int.h"
