#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    /*
Constructor is a special member function with same name as of the class. It is used to initialize the objects of its class
It is automatically invoked whenever an object is created

    */
    Complex(int,int); // constructor definition
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ---> This is a parameterized constructor as it takes two arguments
{
    a = x;
    b = y;
}

int main(){
    //implicit call
    Complex a(4,6);
    a.printNumber();

    //explicit call
    Complex b = Complex(7,5);
    b.printNumber();

    return 0;
}