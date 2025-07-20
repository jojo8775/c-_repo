#include<iostream>
#include<thread>
#include "Logger.h"

void Logger::overrideTransportHive(){
    std::cout << "Overriding the transport hive. tid: " << std::this_thread::get_id() << std::endl;
}