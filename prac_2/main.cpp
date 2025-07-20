#include<iostream>
#include "Logger.h"
#include "Consumer1.h"
#include<thread>


int main(){
    std::cout << "Main func. tid: " << std::this_thread::get_id << std::endl;

    Logger l1;
    Consumer1 c1(l1, "c1");

    auto tr1 = [&](){c1.method1();}; 
    auto tr2 = [&](){c1.method2();}; 

    std::thread th1(tr1);
    // std::thread th2(tr2);

    std::thread th3(tr1);
    // std::thread th4(tr2);

    th1.join();
    // th2.join();

    th3.join();
    // th4.join();
}


// int main(){
//     std::cout << "hello !!" << std::endl;

//     Logger l1;
//     Consumer1 c1(l1, "c1");

//     c1.method3();
//     c1.method3();    

//     Consumer1 c2(l1, "c2");
//     c2.method3();

//     c2.method4();
//     c2.method3();

//     c1.method3();
//     c1.method4();

//     std::cout << "end of file" << std::endl;
// }
