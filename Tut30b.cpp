#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x,y;
    friend double distance(Point,Point);
    public:
        Point(int a, int b){
            x=a;
            y=b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};

double distance(Point a, Point b){
    return (sqrt(pow((a.x-b.x),2) + pow((a.y-b.y),2)));
}

int main(){
    
    Point p(1,1);
    p.displayPoint();

    Point q(7,4);
    q.displayPoint();

    cout<<"The distance between p and q is "<<distance(p,q)<<endl;


    return 0;
}