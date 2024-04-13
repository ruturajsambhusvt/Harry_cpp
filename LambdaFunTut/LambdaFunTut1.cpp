#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// lambda functions are similar to functors
// Main aim is to have convenient syntax for functions

struct Dog
{

    Dog(int age, int weight) : m_age(age), m_weight(weight) {}

    bool operator<(Dog const &other) const
    {
        return m_age < other.m_age;
    }

    int m_age;
    int m_weight;

    bool operator==(int const age) const
    {
        return m_age == age;
    }

    void MyMemberFunction(){

    }
//when you need to capture the memberfunction or varible of the current class instance
    void Foo(){
        //MyMemberFunction();// same
        this->MyMemberFunction();//same
        [this](){
            MyMemberFunction();
        };
    }
};

struct SortDogsByWeightFunctor
{
    /* data */
    bool operator()(Dog const &lhs, Dog const &rhs) const
    {
        return lhs.m_weight < rhs.m_weight;
    }
};

struct FindDogsByWeightFunctor
{
    /* data */
    FindDogsByWeightFunctor(int weight) : m_weight(weight) {}
    bool operator()(Dog const &dog) const
    {
        return dog.m_weight == m_weight;
    }

    int &m_weight;
};

void print_dog(vector<Dog> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v.at(i).m_age << " " << v.at(i).m_weight << endl;
    }
}

int main()
{

    vector<Dog> v = {Dog(3, 40), Dog(1, 20), Dog(5, 10), Dog(2, 30), Dog(4, 50)};
    sort(begin(v), end(v));
    print_dog(v);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     /* code */
    //     cout << v.at(i).m_age << " " << v.at(i).m_weight << endl;
    // }

    sort(begin(v), end(v), SortDogsByWeightFunctor());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     /* code */
    //     cout << v.at(i).m_age << " " << v.at(i).m_weight << endl;
    // }
    print_dog(v);

    Dog d1(1, 10);
    Dog d2(2, 20);

    bool isLess = d1 < d2; // simpler syntax for the next line of code
    bool isLess2 = d1.operator<(d2);
    cout << isLess << " " << isLess2 << endl;

    // Using lambda functions
    sort(begin(v), end(v), [](Dog const &lhs, Dog const &rhs)
         { return lhs.m_weight < rhs.m_weight; });

    print_dog(v);

    auto res1 = find(begin(v), end(v), 3);
    cout << "Find results " << res1->m_age << " " << res1->m_weight << endl;

    auto res2 = find_if(begin(v), end(v), FindDogsByWeightFunctor(20));
    cout << "Find results " << res2->m_age << " " << res2->m_weight << endl;

   int weight = 20;
   int age = 2;

    auto res3 = find_if(begin(v),end(v),[&weight, age](Dog const& dog){   //capture list is like the constructor argument of the function by reference then put &
    // then = for default caputre by value and  & for default capture by reference of all not recommended though
        return dog.m_weight == weight;
    });
    cout << "Find results " << res3->m_age << " " << res3->m_weight << endl;

    return 0;
}