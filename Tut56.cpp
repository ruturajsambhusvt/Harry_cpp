#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    virtual void display(){        // using a pointer of type baseclass that points to derived class, it will use the same method for derived class and not base class          
        cout<<"1 Displaying Base class variable var_base "<<var_base<<endl;
    }
};


class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"2 Displaying base class variable var_base "<<var_base<<endl;
        cout<<"2 Displaying derived class variable var_derived "<<var_derived<<endl;

    }
};

int main(){
    
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 10;
    // base_class_pointer->var_derived = 20; 
    base_class_pointer->display();

    return 0;
}