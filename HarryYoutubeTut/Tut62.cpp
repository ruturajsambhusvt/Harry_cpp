#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me\n";
    out<<"This is me also";
    out.close();

    ifstream in;
    string st,st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof()==0) //eof is end of file
    {
        /* code */
        getline(in,st);
        cout<<st<<endl;
    }
    

    in.close();



    return 0;
}