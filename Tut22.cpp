#include <iostream>
using namespace std;

// Nesting of member functions
class binary
{
//private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    //void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{   
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying you binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // oops classes and objects
    // C++ ---> initially called ---> C with classes
    // class ---> extension of structures
    // structures had limitations
    //  ----> members are public
    //-----> no methods
    // classes ----> structures+more
    // classes can have methods and propoerties
    // classes can make few members as private and few as public
    // structures in Cpp are typedef
    // you can declare objects aling with class declaration like this:
    /* class Employee{
        //class definition
    } harry, rohan, lovish; */
    // harry.salary = 8 makes no sense if salary is private

    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}