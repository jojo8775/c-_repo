#include<iostream>
#include<thread>
#include "thread_guard.h"
#include <future>
#include <atomic>

using namespace std;


void func(int a, int b){
    cout << "a + b = " << (a + b) << endl;
}

void func1(int &a){

    while(true){
        cout << "value of a: " << a << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    
}

void print(){
    cout << "this is a simple print on print thread " << this_thread::get_id() << endl;
}

void print_promise(future<int> &f){
    cout << "printing from the print promise funct" << endl;
}

int add(int x, int y){
    cout << "addition thread id: " << this_thread::get_id() << endl;

    auto result = x + y;
    cout << result << endl;
    
    return result;
}

int substract(int x, int y){
    cout << "substraction thread id: " << this_thread::get_id() << endl;

    auto result = x - y;
    cout << result << endl;

    return result;
}

int main(){

    // int threadCount = thread::hardware_concurrency();
    // cout << "max count : " << threadCount << endl;

    // cout << "this is the first thread " << this_thread::get_id() << endl;

    // future<void> f1 = async(launch::async, print);
    // future<int> f2 = async(launch::deferred, add, 10, 20);
    // future<int> f3 = async(launch::any, substract, 10, 20);

    // f1.get();

    // cout << "result of f2: " << f2.get() << endl;
    // cout << "result of f3: " << f3.get() << endl;

    // promise<int> p;
    // future<int> f = p.get_future();

    // cout << "creating a new thread" << endl;
    // thread print_thread(print_promise, ref(f));

    // cout << "stopping main thread for 5 seconds";
    // this_thread::sleep_for(chrono::milliseconds(5000));

    // cout << "setting the promise " << endl;
    // p.set_value(10);

    // print_thread.join();
    // cout << "end of prog" << endl;

    atomic<bool> v1(true);

    cout << "is lock free? " << v1.is_lock_free() << endl;
}



