#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start, ull end)
{
    for (ull i = start; i <= end; i++)
    {
        /* code */
        if ((i & 1) == 0)
        {
            /* code */
            EvenSum += i;
        }
    }
}

void findOdd(ull start, ull end)
{
    for (ull i = start; i <= end; i++)
    {
        /* code */
        if ((i & 1) == 1)
        {
            /* code */
            OddSum += i;
        }
    }
}

int main()
{
    ull start = 0;
    ull end = 19000000000;

    auto startTime = high_resolution_clock::now();

    std::thread t1(findEven, start, end);
    std::thread t2(findOdd, start, end);

    // joining with main thread
    t1.join();
    t2.join();

/*     findEven(start, end);
    findOdd(start, end); */

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stopTime - startTime);

    cout << "The Oddsum is " << OddSum << endl;
    cout << "The Evensum is " << EvenSum << endl;
    cout << "The time taken is " << duration.count() << "s" << endl;

    return 0;
}