#include <iostream>
using namespace std;

// This is know as Forward declaration. Since we reference this class in Calculator before we actually define it
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);
    //HOw many times we do this?  very repetitive, so just make a entire class a friend class
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    ;
    o2.setNumber(2, 5);
    o1.setNumber(4, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    cout << "The sum of real part of o1 and o2 is " << resc << endl;
    return 0;
}