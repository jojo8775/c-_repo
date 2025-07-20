
#include <iostream>
#include "Consumer.h"
#include "Logger.h"
#include <thread>

int main(){
    Logger log;
    Consumer c1(log);

    std::thread t1([&]{
            c1.executeMethod1();
        });

    std::thread t2([&]{
            c1.executeMethod1();
        });

    t1.join();
    t2.join();
}
