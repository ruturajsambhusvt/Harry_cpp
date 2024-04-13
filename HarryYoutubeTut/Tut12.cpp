#include <iostream>
using namespace std;

int main(){
    //What us a pointer ---> atat type which hillfd the address of other data
    int a =3;
    int* b =&a;
    
    //&------> (Address of) operator
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<b<<endl;
// * ----> (valeu at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;
//Pointer to pointer
    int** c= &b;
    //&------> (Address of) operator
    cout<<"Address of b is "<<&b<<endl;
    cout<<"Address of b is "<<c<<endl;
// * ----> (valeu at) Dereference operator
    cout<<"The value at address b is "<<*c<<endl;
    cout<<"The vakue at address vaue_at(value_at(c) is "<<**c<<endl;

    return 0;
}