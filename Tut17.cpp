#include <iostream>
using namespace std;

int product(int a, int b){
    static int c =0;//This executes only once
    c=c+1;//next time this function is run the value will be retained
    return a*b+c;
}



int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF a and b"<<endl;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
    return 0;


}