//Content from Tu7 

#include<iostream>

using namespace std;

int c = 45;

int main(){
    /* int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c <<endl;  */
     

    float d = 34.4F;
    cout<<"The size of 34.4 is "<< sizeof(34.4f)<<endl;

//********************Reference variables*************
//Rohan--------->MOnty------>Rohu------>Dangerous coder
    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

//*************Typecasting************
int a =45;
float b =45.56;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;
cout<<"The value of b is "<<(b)<<endl;



    return 0;

}