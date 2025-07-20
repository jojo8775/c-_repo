
#include <iostream>
#include <functional>
#include "LoggerHelper.h"
#include <mutex>
#include<typeindex>
#include<typeinfo>
#include<string>

template<typename T>
void LoggerHelper::serialize(T logger, std::function<void()>&& callback){
    // static auto fl = std::mutex();
    auto it = mutexMap_.find(typeid(logger));

    if(it == mutexMap_.end()){
        std::string msg = std::string("Error: no mutex is registered for type: ") + typeid(logger).name();

        std::cout << msg << std::endl;

        throw std::runtime_error(msg);
    }

    std::mutex *mPtr = it->second.get();

    std::cout << "requesting lock in template" << std::endl;
    //std::lock_guard<std::mutex> lock(fl);
    std::lock_guard<std::mutex> lock(*mPtr);
    
    std::cout << "secured lock in template" << std::endl;

    callback();

    std::cout << "finishing callback in template" << std::endl;
}
