#include <iostream>
#include <cmath>
using namespace std;

/*
create 2 classes:
1. simple calc - takes input of 2 numbers using a utility func and performa +,-,*,/
2. scientific calc - TAkes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function

Create another class HybridCalculator and display the results of simple and dcientific calculators
Q1. what type are inheritance are you using
Q2. which inheritance are you using
Q3. create an object of HYbridCalculator and display results of simple and scientific calculator
Q4. How is code reusability implemented


 */

class Simple_Calc
{
    float a;
    float b;

public:
    void set_inputs_simple(void);
    float output_simple(void);
};


void Simple_Calc ::set_inputs_simple()
{
    cout << "Please enter a" << endl;
    cin >> a;
    cout << "Please enter b" << endl;
    cin >> b;
}

float Simple_Calc ::output_simple()
{
    cout << "The sum is " << a + b << endl;
    cout << "The difference is " << a - b << endl;
    cout << "The product is " << a * b << endl;
    cout << "The division is " << a / b << endl;
}


class Scientific_Calc
{
    float a;
    float b;

public:
    void set_inputs_scientific(void);
    float output_scientific(void);
};


void Scientific_Calc ::set_inputs_scientific()
{
    cout << "Please enter a" << endl;
    cin >> a;
    cout << "Please enter b" << endl;
    cin >> b;
}

float Scientific_Calc ::output_scientific()
{
    cout << "The cos(a+b) is " << cos(a + b) << endl;
    cout << "The tanh(a-b) is " << tanh(a - b) << endl;
    cout << "The log is " << log10(a * b) << endl;
    cout << "The power a to b is " << pow(a,b) << endl;
}


class Hybrid_Calc : public Scientific_Calc, public Simple_Calc{
    float a;
    float b;

    public:
    void get_data(void);
    void output(void);

};

void Hybrid_Calc::get_data(){
    set_inputs_scientific();
}

void Hybrid_Calc::output(){
    output_simple();
    output_scientific();
}



int main()
{

    // Simple_Calc simcalc;
    // simcalc.set_inputs();
    // simcalc.output();

    Hybrid_Calc calc;
    calc.set_inputs_scientific();
    calc.output_scientific();
    calc.set_inputs_simple();
    calc.output_simple();

    return 0;
}