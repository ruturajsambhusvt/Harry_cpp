#include <iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a = num;
    }

    Number(Number& obj){
        cout<<"Copy costructor called"<<endl;
        a = obj.a;
    }
    //default copy constructor exists

    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main(){
    Number x(10),y,z(45),z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    //Z1 should look exactly like z
    z2 = z; //copy constructor not called since z2 is created
    z2.display();

    Number z3 = z; //Copy constructor invoked!

    return 0;
}