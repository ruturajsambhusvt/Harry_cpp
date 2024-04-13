#include <iostream>
using namespace std;


typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    //if we need to use only one of them at a time, does memory optimization
    int rice;
    char car;
    float pounds;
};





int main(){
    //struct employee harry;

    enum Meal{breakfast, lunch, dinner};

    Meal m2 = lunch;
    cout<<m2<<endl;

    cout<<breakfast<<endl;
    cout<<lunch<<endl;    
    cout<<dinner<<endl;



    union money m1;
    m1.rice=34;
    m1.car = 'c';
    cout<<m1.rice<<endl;

    ep harry;
    ep shubham;
    harry.eId=1;
    harry.favChar = 'C';
    harry.salary = 1200000;

    
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
}