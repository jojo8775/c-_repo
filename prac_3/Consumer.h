#include<iostream>
#include "Logger.h"

class Consumer{
    public:
        Consumer(Logger logger);

        void executeMethod1();
        void executeMethod2();

    private:
        Logger logger_;
};