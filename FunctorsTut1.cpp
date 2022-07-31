#include <iostream>
using namespace std;

// functors - name given to function object

struct Object
{
    int operator()(int i) const
    {
        return i;
    }
};

struct AddFunctor
{

    AddFunctor(int x) : m_x(x) {}

    /*   int operator()(int x, int y) const
      {
          return x + y;
      } */

    int operator()(int y) const
    {
        return m_x + y;
    }

    int m_x;
};

struct DoSomethingFunctor
{

    DoSomethingFunctor(int i, bool b, float f, double d, unsigned int u) : m_i(i),
                                                                           m_b(b),
                                                                           m_f(f),
                                                                           m_d(d),
                                                                           m_u(u), {}

    /*   int operator()(int x, int y) const
      {
          return x + y;
      } */

    int operator()(int y) const
    {
        return m_x + y;
    }

    void operator()(char c) const{
        DoSomething(m_i,m_b,m_f,m_d,m_u,c)
        ++m_count;
    }

    int m_x;
    bool m_b;
    float m_f;
    double m_d;
    unsigned int m_u;
    mutable unsigned int m_count;

};

int Foo(int i)
{
    return i;
}

int Add(int X, int Y)
{
    return X + Y;
}

void DoSomething(int i, bool b, float f, double d, unsigned int u, char c)
{
    // does something
}

int main()
{
    /*  cout<<Foo(42)<<endl;
     Object O;
     cout<<O(42)<<endl; */

    /* int i = 1;
    int j = 2;
    cout << Add(i, 3) << endl;
    cout << Add(j, 3) << endl;

    AddFunctor A(3);
    cout << A(i) << endl;
    cout << A(j) << endl;
 */
    DoSomething(1, true, 2.f, 3., 4u, 'a');
    DoSomething(1, true, 2.f, 3., 4u, 'b');
    DoSomethingFunctor F(1,true,2.f,3.,4u);
    F('a');
    F('b');
    //Functor is a function with state

    return 0;
}