#include <iostream>
using namespace std;

class Complex{
    int a,b;
    //friend Complex sumComplex(Complex o1, Complex o2); //this is okay as well

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
//below line means non-member sumComplex function is allowed to access the private variables
        friend Complex sumComplex(Complex o1, Complex o2);
};

/* Properties of friend function
1. Not in the scop of class
2. since it is not in the scope of the class, it cannot be called from the object of that class c1.sumComplex()==Invalid
3. Can be invoked without the help of any object
4. Usually contains objects as arguments
5. can be declared inside public or private secton
6.  It cannot access the members directly by name and needs object to access the members


*/

//This is not a class member function but it is a friend and can access private variables
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}