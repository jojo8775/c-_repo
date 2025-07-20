#include<iostream>
#include "Consumer.h"
#include "LoggerHelper.h"
#include <thread>
#include <chrono>

Consumer::Consumer(Logger logger) : logger_(logger){
}

void Consumer::executeMethod1(){
    LoggerHelper::getInstance().serialize(
        logger_,
        [&](){
            std::cout << "inside callback method. tid: " << std::this_thread::get_id() << std::endl;
            logger_.overrideTransportHive();

            int sec = 4;
            std::cout << "sleeping for " << sec << "s. tid: " << std::this_thread::get_id() << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(sec));
            std::cout << "woke up from sleep. tid: " << std::this_thread::get_id() << std::endl;
        } 
    );
}