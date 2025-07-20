#include<iostream>
#include "person.h"

Person::Person(const std::string& firstName, const std::string& lastName, int age)
:firstName(firstName), lastName(lastName), age(age) {
    std::cout << "constructor invoked" << std::endl;
}

Person::Person(const Person& other):Person(other.firstName, other.lastName, other.age){
    std::cout << "copy invoked" << std::endl;
}

Person::Person(Person&& other):Person(other.firstName, other.lastName, other.age){
    std::cout << "move invoked" << std::endl;
}

Person::~Person(){
    std::cout << "delete constructor invoked" << std::endl;
}


std::string Person::getFirstName(){
    return firstName;
}

std::string Person::getLastName(){
    return lastName;
}

int Person::getAge(){
    return age;
}

