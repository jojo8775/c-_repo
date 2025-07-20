#pragma once
#include "Logger.h"
#include <string>

class Consumer1{
    public:
        Consumer1(Logger logger, std::string label);
        Consumer1(const Consumer1 &other);
        Consumer1(Consumer1&& other) noexcept;

        void method1();
        void method2();
        void method3();
        void method4();

    private:
        Logger logger_;
        std::string label_;
};
