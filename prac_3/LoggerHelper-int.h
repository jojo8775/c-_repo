#include "LoggerHelper.h"
#include <functional>
#include <typeindex>
#include <typeinfo>
#include <mutex>
#include <thread>

template<typename T>
void LoggerHelper::serialize(T logger, std::function<void()>&& callBack){
    auto it = mutexMap_.find(typeid(logger));

    if(it == mutexMap_.end()){
        std::string msg = std::string("the given logger parameter type is not registered. Type: ") + typeid(logger).name();
        //std::string msg(("the given logger parameter type is not registered. Type: " + typeid(logger));

        std::cout << msg << ". tid: " << std::this_thread::get_id() << std::endl;

        throw std::runtime_error(msg);
    }

    std::mutex *lm = it->second.get();

    std::cout << "requesting for lock. tid: " << std::this_thread::get_id() << std::endl;
    std::lock_guard<std::mutex> lock(*lm);
    std::cout << "secured lock. . tid: " << std::this_thread::get_id() << std::endl;

    callBack();

    std::cout << "callback is complete. tid: " << std::this_thread::get_id() << std::endl;
}
