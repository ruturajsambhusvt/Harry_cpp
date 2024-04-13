#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;

// Function pointer, a very basic form of thread creation

// using a functor
class Base
{
public:
    void operator()(int x)
    {
        while (x-- > 0)
        {
            /* code */
            cout << x << endl;
        }
    }

    void run(int x)
    {
        while (x-- > 0)
        {
            /* code */
            cout << x << endl;
        }
    }

    static void run1(int x)
    {
        while (x-- > 0)
        {
            /* code */
            cout << x << endl;
        }
    }
};

void fun(int x)
{
    while (x-- > 0)
    {
        /* code */
        cout << x << endl;
    }
}
int main()
{

    // Function pointer, a very basic form of thread creation
    std::thread t1(fun, 11);
    t1.join();

    // lambda function, directly inject function at thread creation time

    auto fun1 = [](int x)
    {
        while (x-- > 0)
        {
            /* code */
            cout << x << endl;
        }
    };

    std::thread t2(fun1, 11);
    t2.join();

    std::thread t3([](int x)
                   {
        while (x-- > 0)
        {
            /* code */
            cout << x << endl;
        } },
                   11);

    t3.join();
    // Using a functor
    std::thread t4((Base()), 11);
    t4.join();

    // Non-static member function
    Base b; // need object to call non static member
    std::thread t5(&Base::run, &b, 11);
    t5.join();

    // static member function
    std::thread t6(&Base::run1, 11);
    t6.join();

    return 0;
}