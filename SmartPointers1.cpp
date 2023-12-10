#include<iostream>
using namespace std;

 class myInt{
        public:
        explicit myInt(int* p = nullptr){
            data = p;
        }
        ~myInt(){
            cout<<"Resource for "<<*data<<" deallocated"<<endl;
            delete data;
        }
        int& operator*(){
            return *data;}
    
    private:
    int* data;
 };



int main(){
    //Basic example of smart pointers
    //Why do we need smart pointers?
    //To avoid memory leaks, and remove the object from the heap memory when it is no longer needed
    //Smart pointer are objects that wrap around a raw pointer and manage its lifetime

    //There are 3 types of smart pointers:
    //1. unique_ptr
    // aLLows only one owner of the underlying pointer
    //2. shared_ptr
    //Allows multiple owners of the same pointer and keeps the count of how many owners are there
    //3. weak_ptr
    //It is a special type of shared pointer that doesn't keep the count of how many owners are there
    int* p = new int(40);
    myInt myint = myInt(p);
    cout<<"The value at address p is "<< *myint <<endl;
    return 0;
}