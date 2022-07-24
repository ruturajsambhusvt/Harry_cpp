#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;

void run(int count)
{
    while (count-- > 0)
    {
        /* code */
        cout << count << "CppNuts" << endl;
    }
    std::this_thread::sleep_for(chrono::seconds(3));
    cout << "Thread finished!" << endl;
}

int main()
{

    std::thread t1(run, 10);

    cout << "main()" << endl;

    // t1.join();  //wait there for the thread to be completed

    // if (t1.joinable())
    // {
    //     /* code */
    //     t1.join();
    // }

    if (t1.joinable())
    {
        t1.detach(); // the main does not wait for the thread so main can go faster
    }

    cout << "main() after" << endl;
    // std::this_thread::sleep_for(chrono::seconds(6));

    return 0;
}