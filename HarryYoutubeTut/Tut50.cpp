#include <iostream>
using namespace std;

int main(){
    //Basic example
    int a =4;
    int* ptr = &a;

    cout <<"The value of a is "<<*(ptr)<<endl;

    //new keyword
    int *p = new int(40);
    float *q = new float(40.78);

    cout<<"The value at address p and q is "<< *(p)<<" and "<<*(q)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    *(arr+1) = 40;

    //delete[] arr; // frees up the memory

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    //delete operator


    return 0;
}