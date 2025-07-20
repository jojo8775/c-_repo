#pragma once

#include<iostream>

class Person{
    public:
        Person() = delete;
        Person(const std::string& firstName, const std::string& lastName, int age = 0);
        Person(const Person& other);
        Person(Person&& other);
        ~Person();

        std::string getFirstName();
        std::string getLastName();
        int getAge();

    private: 
        std::string firstName;
        std::string lastName;
        int age;
};