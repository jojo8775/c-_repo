#include "Logger.h"
#include<iostream>

Logger::Logger(){
    std::cout << "Creating a logger object" << std::endl;
}

void Logger::overrideTransport(){
    std::cout << "Overriding the logger transport" << std::endl;
}
