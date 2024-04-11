// Topic: Weak Pointers
// NOTES
// 0. If unique_ptr is for unique ownership and shared_ptr is for shared ownership, then weak_ptr is for non-ownership.
// 1. It is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by shared_ptr.
// 2. A weak_ptr is created as a copy of shared_ptr.
// 3. Need to convert weak_ptr to shared_ptr in order to access the object.
// 4. It is used to break cyclic dependency between shared_ptr.


#include<iostream>
#include<memory>
using namespace std;

int main(){

    auto sharedPtr = std::make_shared<int>(40);
    std::weak_ptr<int> weakPtr(sharedPtr);

    cout<<"weakPtr.use_count() = "<<weakPtr.use_count()<<endl;
    cout<<"sharedPtr.use_count() = "<<sharedPtr.use_count()<<endl;
    cout<<"weakPtr.expired() = "<<weakPtr.expired()<<endl;

    // lock() function returns a shared_ptr object if the weak_ptr is still valid
    if(std::shared_ptr<int> sharedPtr1 = weakPtr.lock()){
        cout<<"*sharedPtr1 = "<<*sharedPtr1<<endl;
        cout<<"*sharedPtr = "<<*sharedPtr<<endl;
        cout<<"sharedPtr1.use_count() = "<<sharedPtr1.use_count()<<endl;
    }

    else{
        cout<<"Weak pointer expired"<<endl;
    }

    weakPtr.reset();

    if(std::shared_ptr<int> sharedPtr1 = weakPtr.lock()){
        cout<<"*sharedPtr1 = "<<*sharedPtr1<<endl;
        cout<<"*sharedPtr = "<<*sharedPtr<<endl;
        cout<<"sharedPtr1.use_count() = "<<sharedPtr1.use_count()<<endl;
    }

    else{
        cout<<"Weak pointer expired"<<endl;
    }



    
    return 0;
}