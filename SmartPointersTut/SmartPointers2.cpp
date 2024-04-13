//Unique pointer
    //1.Unique pointer is a class template 
    //2.Unique pointer is one of the smart pointers provided by C++11 standard
    //3.Unique pointer wraps a raw pointer in it, and de-allocates the raw pointer, when unique pointer object goes out of scope
    //4. Simlar to actual pointers, we can use arrow and * on the object of unique pointer because it is overloaded in unique pointer class
    //5. It will deallocate even when exception is thrown in the code
    //6. We can create array of objects of unique pointer

    //OPERATIONS ON UNIQUE POINTER
    //1. get() - returns the address of the object that the unique pointer is pointing to
    //2. release() - releases the ownership of the object, i.e. the unique pointer will not point to the object anymore
    //3. reset() - deletes the associated object and makes the unique pointer point to NULL
    //4. swap() - swaps the associated object of two unique pointers
    //5. operator* - returns the reference to the object the unique pointer is pointing to
    //6. operator-> - returns the pointer to the object the unique pointer is pointing to
    //7. get_deleter() - returns a copy of the deleter object associated with the unique pointer


#include<iostream>
#include<memory>
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

int main(){
    

    Foo* p = new Foo(10);
    cout<<"The value of p is "<<p->get()<<endl;

    std::unique_ptr<Foo> up1(new Foo(20));
    cout<<"The value of up1 is "<<up1->get()<<endl;

    std::unique_ptr<Foo> up2(new Foo(30));
    std::unique_ptr<Foo> up3 = make_unique<Foo>(40); //Should use make unique instead of new keyword

    cout<<"The value of up2 is "<<up2->get()<<endl;
    cout<<"The value of up3 is "<<up3->get()<<endl;

    // up3 = up2; //This will throw an error because unique pointer cannot be copied
    Foo* up4 = up3.get(); // This will give the pointer up3 to up4

    cout<<"The value of up4 is "<<up4->get()<<endl;
    cout<<"The value of up3 is "<<up3->get()<<endl;

    Foo* up5 = up3.release(); //This will release the pointer up3 and give it to up5

    cout<<"The value of up5 is "<<up5->get()<<endl;
    // cout<<"The value of up3 is "<<up3->get()<<endl; //Segmentation error

    up2.reset(up4); //This will delete the pointer up4 and give it to up2

    cout<<"The value of up4 is "<<up4->get()<<endl;
    cout<<"The value of up2 is "<<up2->get()<<endl;
    

    return 0;
}