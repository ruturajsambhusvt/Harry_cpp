#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
    }
};


class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
        cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;

    }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer =&obj_derived; //permitted to point base class pointer to a derived class but it will only access he functions of base class

    base_class_pointer->var_base =34;
    //base_class_pointer->var_derived =34; //Will throw an error
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448; 
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();


    return 0;
}