
#include<iostream>
#include "AdConvCrap.h"
#include "CarUtil.h"
#include "CarType1.h"
#include "CarType2.h"

int main(){
    std::cout << "this is it" << std::endl;

    // AdConvCrap a1;

    // a1.setSessionId(100);

    // auto a2 = a1.clonePtr();

    // std::cout << "a1->sessionId: " << a1.getSesstionId() << std::endl;
    // std::cout << "a2->sessionId: " << a2->getSesstionId() << std::endl;

    CarUtil ut;
    CarType1 ct1;
    CarType2 ct2;

    ut.printContent(ct1);
    ut.printContent(ct2);
}