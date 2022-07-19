#include <iostream>
using namespace std;

/*
Case 1:
class B: public A{
//Order of execution of contructor -> first A() then B()

Case2:
class A: public B, public C
{
    //Order pf execution of contructor -> B() then C() and A()
}

Case3:
class A: public B, virtual public C{
    //order of execution of constructor -> C() then B() then A()
}
};


 */

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "The base1 class constructor is called" << endl;
    }
    void printDatabase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "The base2 class constructor is called" << endl;
    }
    void printDatabase2(void)
    {
        cout << "The value of data1 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }

    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{

    Derived harry(1,2,3,4);
    harry.printDatabase1();
    harry.printDatabase2();
    harry.printDataDerived();
    return 0;
}