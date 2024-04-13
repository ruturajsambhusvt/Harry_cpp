#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>
using namespace std;
using namespace std::chrono;

//try lock function, trying to lock the function. Tries to lock, if already locked then does not get blocked and returns back. 
//Cannot be used by same mutex and same thread twice



int counter = 0;
std::mutex mtx;

void increaseTheCounterFor100000Time(){
    for (int i = 0; i < 100000; i++)
    {
        /* code */
        if (mtx.try_lock())
        {
            /* code */
            ++counter;
            mtx.unlock();
        }
        
    }
    
}


int main(){
    
    std::thread t1(increaseTheCounterFor100000Time);
    std::thread t2(increaseTheCounterFor100000Time);

    t1.join();
    t2.join();

    cout<<"The counter could increase upto "<<counter<<endl;
//output never 200000 as expected because if one thread locks it the other thread returns false and goes looping without increment
    return 0;
}