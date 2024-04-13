#include <iostream>
#include <map>
#include <string>

using namespace std;

//Map is an associative array

int main(){
    map<string,int> marksMap;
    marksMap["Harry"]=98;
    marksMap["Jack"]=59;
    marksMap["Rohan"]=2;

    marksMap.insert({{"Kozeum",169},{"Kuoo",39}});

    map<string,int> :: iterator iter;
    for (iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        /* code */
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}