#include <iostream>
using namespace std;

int main(){
    int marks[4] = {23,45,56,89};
    //marks -> pointer of first element address
    //POinters and arrays
     int *p = marks;
     cout<<"The value of marks[0] is "<<*p<<endl;
     cout<<"The value of marks[1] is "<<*(p+1)<<endl;
     cout<<"The value of marks[2] is "<<*(p+2)<<endl;
     cout<<"The value of marks[3] is "<<*(p+3)<<endl;

     cout<<*(p++)<<endl; //first prints p and increments then
     cout<<*(++p)<<endl; //first increments and then prints

    return 0;
} 