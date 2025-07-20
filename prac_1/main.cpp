
#include<iostream>
#include "cylinder.h"
#include "dog.h"
#include "square.h"
#include "person.h"
#include<vector>
#include<memory>
#include "car.h"
#include "Sphere.h"
#include "Shape.h"
#include "Oval.h"
#include "Lion.h"


Dog* someFunc();
const Square& getMaxSquare(const Square& s1, const Square& s2){
    if(s1.getArea() >= s2.getArea()){
        return s1;
    }

    return s2;
}

void checkPerson(Person* p1){
    std::cout << "first name: " << p1->getFirstName() << std::endl;
}

std::weak_ptr<Car> assignWeakPointer(std::shared_ptr<Car> ptr){
    std::weak_ptr<Car> wp = ptr;
    return wp;
}



void print(const int& val){
    std::cout << "this is val: " << val << std::endl;
    //val += 5;
}

void print_sum(int *a, int *b){
    std::cout << (*a + *b) << std::endl;
}

void print_str(std::string &str){
    std::cout << str << std::endl;
}

constexpr int get_val(int a){
    return a * 10;
}


template <typename T>
std::shared_ptr<T> max_value(std::shared_ptr<T> a, std::shared_ptr<T> b){
    if(*a > *b){
        return a;
    }

    return b;
}


int main(){

    auto a = std::make_shared<int>(2);
    auto b = std::make_shared<int>(4);;
    auto m = max_value(a, b);

    std::cout << "max : " << *m << std::endl;
}


// int main(){
//     // auto func = [](int a, int b) -> int{
//     //     std::cout << "this is my first lamda: " << (a + b) << std::endl;

//     //     return (a + b);
//     // };

//     // func(4, 8);
// }


// int main(){
//     auto ll = std::make_shared<Lion>("label for lion");

//     std::cout << "can fly: " << ll->canFly() << " can swim: " << ll -> canSwim() << "  can run: " << ll ->canRun() << std::endl;
// }




Dog* someFunc(){

    int aa = 2;
    int& ref = aa;

    auto d1 = new Dog("a", "a", ref);

    //std::cout << d1->getName() << std::endl;

    return d1;
}
