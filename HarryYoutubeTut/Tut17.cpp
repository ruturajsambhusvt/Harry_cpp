#include <iostream>
using namespace std;

int product(int a, int b){
    static int c =0;//This executes only once
    c=c+1;//next time this function is run the value will be retained
    return a*b+c;
}

inline int in_product(int a, int b){
    return a*b;  //Saves times by not copying the values again and again and replaces the execution while calling in compile time
    // should be used only on small functions having less lines of code
    // If you have inline for big functions it will increase the size of the program in cache memory
}


int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF a and b"<<endl;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
    cout<<in_product(a,b)<<endl;
    return 0;


}