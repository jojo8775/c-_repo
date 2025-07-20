
#include<vector>
#include<thread>

class thread_guard{

private:
    std::thread & t;

public: 
    explicit thread_guard(std::thread & _t ) : t(_t)
    {}

    ~thread_guard(){
        if(t.joinable()){
            t.join();
        }
    }

    thread_guard(const thread_guard & _t) = delete;
    thread_guard & operator= (const thread_guard & other) = delete;
};