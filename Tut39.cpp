#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/* 
For a protected member:
                                   Public Derivation      Private Derivation           Protected Derivation
1. Private members                Not inherited             Not inherited                 Not inherited
2. Protected members               Protected                 Private                      Protected
3. Public members                  Public                     Private                     Protected

 */

class Derived : protected Base{


};

int main()
{
    Base b;
    Derived d;
    //cout<<d.a;// will not work as a is protected and cannot be accessed
    return 0;
}