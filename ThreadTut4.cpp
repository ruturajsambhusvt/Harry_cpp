#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>
using namespace std;
using namespace std::chrono;


//MUTEX is there to avoid race condition
//We us elock andunlock on muex to avoid race condition
int myAmount = 0;

std::mutex m;

void addMoney(){
    m.lock();
    myAmount+=1;
    cout<<"one"<<endl;
    m.unlock();
}

void addMoney1(){
    m.lock();
    myAmount+=2;
    cout<<"two"<<endl;
    m.unlock();
}



int main(){

    std::thread t1(addMoney);
    std::thread t2(addMoney1);

    t1.join();
    t2.join();

    cout<<myAmount<<endl;
    
    return 0;
}