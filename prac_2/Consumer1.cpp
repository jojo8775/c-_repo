#include<iostream>
#include "Consumer1.h"
#include "Logger.h"
#include <string>
#include <mutex>
#include <chrono>
#include "LoggerHelper.h"

Consumer1::Consumer1(Logger logger, std::string label)
: logger_(logger), label_(label){
    std::cout << "Creating instance of Consumer1:" << std::endl;
}

Consumer1::Consumer1(const Consumer1 &other)
    :Consumer1(other.logger_, other.label_){
    std::cout << "Copy constructor is triggered" << std::endl;
}

Consumer1::Consumer1(Consumer1&& other) noexcept : logger_(std::move(other.logger_)), label_(std::move(other.label_)){
    std::cout << "move constructor is triggered" << std::endl;
}

// void Consumer1::method1(){
//     std::cout << "1: Requesting for lock. tid: " << std::this_thread::get_id()<< std::endl;
//     static auto fl = std::mutex();
//     std::lock_guard<std::mutex> lock(fl);
//     std::cout << "1: secured lock. tid:" << std::this_thread::get_id()<< std::endl;
//     std::this_thread::sleep_for(std::chrono::seconds(1));

//     logger_.overrideTransport();
//     std::this_thread::sleep_for(std::chrono::seconds(1));
//     std::cout << "1: this is after calling override. tid:" << std::this_thread::get_id()<< std::endl;

//     int sec = 3;
//     std::cout << "1: sleeping for " << sec << "s. tid:" << std::this_thread::get_id()<< std::endl;
//     std::this_thread::sleep_for(std::chrono::seconds(sec));
//     std::cout << "1: wokeup. tid:" << std::this_thread::get_id()<< std::endl;
// }

void Consumer1::method1(){

    LoggerHelper::initialize().serialize(logger_, [&](){
        std::cout << "1: Requesting for lock. tid: " << std::this_thread::get_id()<< std::endl;
    static auto fl = std::mutex();
    std::lock_guard<std::mutex> lock(fl);
    std::cout << "1: secured lock. tid:" << std::this_thread::get_id()<< std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    logger_.overrideTransport();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1: this is after calling override. tid:" << std::this_thread::get_id()<< std::endl;

    int sec = 3;
    std::cout << "1: sleeping for " << sec << "s. tid:" << std::this_thread::get_id()<< std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(sec));
    std::cout << "1: wokeup. tid:" << std::this_thread::get_id()<< std::endl;
    });
}

void Consumer1::method2(){
    std::cout << "2: Requesting for lock. tid: " << std::this_thread::get_id() << std::endl;
    static auto fl = std::mutex();
    std::lock_guard<std::mutex> lock(fl);
    std::cout << "2: secured lock. tid:" << std::this_thread::get_id() << std::endl;

    logger_.overrideTransport();
    std::cout << "2: this is after calling override. tid:" << std::this_thread::get_id() << std::endl;

    int sec = 5;
    std::cout << "2: sleeping for " << sec << "s. tid:" << std::this_thread::get_id() << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(sec));
    std::cout << "2: wokeup. tid:" << std::this_thread::get_id() << std::endl;
}

void Consumer1::method3(){
    static int a1 = 1; 
    a1++;

    std::cout << "m3 -> Label: " << label_ << "   a1 val : " <<  a1 << std::endl;
}

void Consumer1::method4(){
    static int a1 = 1; 
    a1++;

    std::cout << "m4 -> Label: " << label_ << "   a1 val : " <<  a1 << std::endl;
}