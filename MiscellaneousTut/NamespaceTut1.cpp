#include <iostream>
using namespace std;


namespace MySpace{
    int a;
    int f1();
    class A{
        public: void fun1();
    };
}

int MySpace::f1(){
    // std::cout<<"Hello f1"<<std::endl; Without line using namespace std
    cout<<"Hello f1"<<endl;
    return 0;
}
 //inspite of using namespace MySpace, we need to always use scope decalaration operators while defining functions and stuff. For just using it, we can skip usong the scope resoluition operator

void MySpace::A::fun1(){    
    cout<<"Hello fun1"<<endl;
}

using namespace MySpace;
int main(){
    // MySpace::a=5;
    a=5;
    f1();
    A obj;
    obj.fun1();
    return 0;
}


// iostream has namespaces made in it. It had std namespace and all functions are inside std like cout. Hence, include iostream