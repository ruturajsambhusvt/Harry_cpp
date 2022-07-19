#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}

void swapPointer(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
//This is found in all libfranka functions its pass by reference variables
void swapReferenceVar(int& a, int& b){
    int temp = a;
    a=b;
    b=temp;
}

int & swapReferenceVar2(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
    return a;
}

int main(){
    int x =4,y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar2(x,y) = 766;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;


    return 0;
}