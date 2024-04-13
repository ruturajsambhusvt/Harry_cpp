#include <iostream>
using namespace std;
// Base class

class Employee
{
    // int id;

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee() {}
};

/*
//Derived class
class {{derived-class-name}} : {{visibility- mode}} {{base-class-name}}
{
    class members/methods/etc....
}
Note:
1.Default visibility mode is private
2. pRIVATE VISIBILITY MODE: public members of base class becomes private of the derived class
3.Public visibility mode: publi members of base class becomes public of the deerived class
4. Private members of base class can NEVER BE inherited in the derived class
 */

// Creating a Programmer class derived from Employee Base class

class Programmer : public Employee
{
public:
    int languageCode;

    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData(void)
    {
        cout << id << endl;
    }
};

int main()
{

    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}