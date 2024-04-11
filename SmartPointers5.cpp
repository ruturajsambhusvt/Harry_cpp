#include<iostream>
#include<memory>
using namespace std;

struct Son;
struct Daughter;

struct Mother{
    std::weak_ptr<Son> mySon;
    std::weak_ptr<Daughter> myDaughter;

    Mother(){
        cout<<"Mother constructor"<<endl;
    }
    ~Mother(){
        cout<<"Mother destructor"<<endl;
    }
    void setSon(std::weak_ptr<Son> s){
        mySon = s.lock();
    }
    void setDaughter(std::weak_ptr<Daughter> d){
        myDaughter = d.lock();
    }


};

struct Daughter{
    std::shared_ptr<Mother> myMother;

    Daughter(std::shared_ptr<Mother> m){
        myMother = m;
        cout<<"Daughter constructor"<<endl;
    }
    ~Daughter(){
        cout<<"Daughter destructor"<<endl;
    }

};

struct Son{
    std::shared_ptr<Mother> myMother;

    Son(std::shared_ptr<Mother> m){
        myMother = m;
        cout<<"Son constructor"<<endl;
    }
    ~Son(){
        cout<<"Son destructor"<<endl;
    }
};

// If all are shared pointers, the destructor will never be called because the reference count will never reach 0 and this is called a cyclic dependency.

int main(){
    std::cout<<"-----------------"<<std::endl;
    
    std::shared_ptr<Mother> mother = std::shared_ptr<Mother>(new Mother());
    std::shared_ptr<Son> son = std::shared_ptr<Son>(new Son(mother));
    std::shared_ptr<Daughter> daughter = std::shared_ptr<Daughter>(new Daughter(mother));
    mother->setSon(son);
    mother->setDaughter(daughter);


    std::cout<<"-----------------"<<std::endl;
    
    return 0;
}