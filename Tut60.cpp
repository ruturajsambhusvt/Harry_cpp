#include <iostream>
#include <fstream>

// The useful classes for working with files in C++ are:
/*
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are two ways to opena file:
1. Using the constructor
2. Using the member function open() of the class
 */

using namespace std;

int main()
{
    string st = "Harry bhai";
    string st2;
    // Opening files using constructor and writing it
    ofstream out("sample60.txt");
    out << st;

    // Opening files using constructor and reading it
    ifstream in("../sample60b.txt");
    // in>>st2;
    getline(in, st2);

    cout << st2 << endl;

    getline(in, st2);

    cout << st2 << endl;

    return 0;
}


//Note : the file being read from has to be present in the build folder or the folder where the executable lies and not where the .cpp