#include <iostream>

class Point{
    int x,y;
    public:
    Point(int x, int y):x(x),y(y){}
    int getX(){return x;}
    int getY(){return y;}
};

int main()
{
    Point p(10,20);
    std::cout<<"printed"<<std::endl;
    return 0;
}

// gdb commands list
//  save breakpoints filename
//  source filename
// How to see class of the point class?
//  ptype variable_name - valid for pointers, addresses, and variables
// p p - prints the value of the variable
// print give $1 and makes a copy of the variable -> basically pointer to the variable
// You can use that pointer to access the class members