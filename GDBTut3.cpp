#include <iostream>

class A{
    int i;
    public:
    A(int i):i{i}{}; //constructor of class A is initializing the object of class A 
};

class B{
    A a;
    public:B(int a):a{a}{}; //constructor of class B is initializing the object of class A
};

class C{
    B b; A ca;
    public:
    C(int a, int b):b{b},ca{a} {}; //constructor of class C is initializing the object of class B and A 
};

int main()
{
    C c = {1,2}; //object of class C is created and initialized with 1 and 2
    return 0;
    
}

// gdb commands list
// pretty-printer on by this command
// set print pretty on
