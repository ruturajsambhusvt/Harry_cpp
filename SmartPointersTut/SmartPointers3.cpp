    //NOTES
    //0. Shared Pointer is a smart pointer that retains shared ownership of an object through a pointer.
    //1. Several shared_ptr objects may own the same object.
    //2. It keeps a reference count to maintain how many shared_ptr are pointing to the same object and once the last shared_ptr goes out of scope, it deletes the object.
    //3. Shared pointers are thread safe and not thread safe.
        //a. Control block is thread safe
        //b. Managed object is not thread safe (We can make it thread safe by using mutex)
    //4.There are three ways shared pointers will destroy the object:
        //a. When the last shared pointer pointing to the object goes out of scope
        //b. When we reset the shared pointer
        //c. When we make the shared pointer point to some other object
    //5. Reference count does not work if we use reference or pointer to the shared pointer

#include<iostream>
#include<memory>
#include<thread>
using namespace std;

class Foo{
    int x;
    public:
    explicit Foo(int x){
        this->x = x;
        cout<<"Constructor called"<<endl;
    }
    int get(){  return x;}
    ~Foo(){
        cout<<"Destructor called and Foo destroyed"<<endl;
    }
};

void fun(std::shared_ptr<Foo> sp){
    cout<<"The reference count of sp is for function: "<<sp.use_count()<<endl;
}

int main(){

    std::shared_ptr<Foo> sp1(new Foo(10));
    cout<<"The value of sp1 is "<<sp1->get()<<endl;
    cout<<"The reference count of sp1 is "<<sp1.use_count()<<endl; //Note that use_count is not a method, it is a variable

    std::shared_ptr<Foo> sp2 = sp1;
    cout<<"The value of sp2 is "<<sp2->get()<<endl;
    cout<<"The reference count of sp2 is "<<sp2.use_count()<<endl;
    cout<<"The reference count of sp1 is "<<sp1.use_count()<<endl;

    std::shared_ptr<Foo> *sp3 = &sp1; //Passing by pointer does not increase the reference count
    cout<<"The value of sp3 is "<<sp3->get()->get()<<endl;
    cout<<"The reference count of sp3 is "<<sp3->use_count()<<endl;

    std::shared_ptr<Foo> &sp4 = sp1; //Passing by reference does not increase the reference count
    cout<<"The value of sp4 is "<<sp4->get()<<endl;
    cout<<"The reference count of sp4 is "<<sp4.use_count()<<endl;

    std::shared_ptr<Foo> sp5(new Foo(100)); //This will move the pointer sp1 to sp5 and make sp1 point to NULL
    cout<<"Initial reference count: "<<sp5.use_count()<<endl;

    thread t1(fun, sp5), t2(fun, sp5), t3(fun, sp5), t4(fun, sp5), t5(fun, sp5);
    cout<<"The reference count of main: "<<sp5.use_count()<<endl;
    t1.join();t2.join(),t3.join(), t4.join(), t5.join();

    
    return 0;
}