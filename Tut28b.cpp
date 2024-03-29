#include <iostream>
using namespace std;


class c1;
class c2;

class c1
{
    int val1;

public:
    void intdata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }

    friend void exchange(c1&,c2&);
};

class c2
{
    int val2;

public:
    void intdata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }

    friend void exchange(c1&,c2&);
};

/*

Trick to swap two numbers a and b:
temp =a;
a=b;
b=temp;

*/

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.intdata(34);
    oc2.intdata(57);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}