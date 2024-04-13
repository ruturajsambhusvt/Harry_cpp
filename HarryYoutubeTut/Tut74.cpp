#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;



int main(){
//Function object Functor : Function wrapped in a class so that it available like an object

    int arr[]={1,32,4,51,6,8,8,5,4};
    // sort(arr,arr+4);
    sort(arr,arr+9, greater<int>());
    for (int i = 0; i < 9; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    
    return 0;
}