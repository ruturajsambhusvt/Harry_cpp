#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>
using namespace std;
using namespace std::chrono;


int myAmount = 0;
std::timed_mutex m;
//try lock for
// void increment(int i){
//     if (m.try_lock_for(std::chrono::seconds(2)))
//     {
//         /* code */
//         ++myAmount;
//         std::this_thread::sleep_for(std::chrono::seconds(1));
//         cout<<"Thread "<<i<<" Entered"<<endl;
//         m.unlock();
//     }
//     else
//     {
//         /* code */
//         cout<<"Thread "<<i<<" Couldn't Enter"<<endl;
//     }
    
    
// }

//try lock until
void increment(int i){
    auto now=std::chrono::steady_clock::now();
    if (m.try_lock_until(now+std::chrono::seconds(1)))
    {
        /* code */
        ++myAmount;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout<<"Thread "<<i<<" Entered"<<endl;
        m.unlock();
    }
    else
    {
        /* code */
        cout<<"Thread "<<i<<" Couldn't Enter"<<endl;
    }
    
    
}



int main(){

    std::thread t1(increment,1);
    std::thread t2(increment,2);

    t1.join();
    t2.join();

    cout<<myAmount<<endl;
    

    return 0;
}