#include <iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "Enter the id:" << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of the employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(){
        //cout<<id;// throws an error only static variable allowed in static functions
        cout<<"The count is "<<count<<endl;
    }
};

// static variables
int Employee ::count=1000; // defult value zero

int main()
{
    Employee harry, rohan, lovish;
    //count is the static data member of class employee
    harry.setData();
    harry.getData();
    Employee::getCount();


    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}