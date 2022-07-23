#include <iostream>
using namespace std;

/*

Syntax for initialization list in constructor:
constructor(argument-list) : initialization-section
{
    assignment + other code

class Test{
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j)
}
}
 */

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)  //---> a will be initialized first since a i writted first in the class init
    {
        cout << "Constructor executed" << endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};


int main()
{
    Test t(4,6);
    return 0;
}