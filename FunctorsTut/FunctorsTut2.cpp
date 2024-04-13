#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Dog
{
    Dog(int age, int weight) : m_age(age), m_weight(weight) {}

    bool operator<(Dog const &other) const
    {
        return m_age < other.m_age;
    }

    bool operator==(int age) const
    {
        return m_age == age;
    }

    /*     bool operator<(Dog const& other) const{
            return m_weight < other.m_weight;
        } */
    // cannot have second < operator

    int m_age;
    int m_weight;
};

struct SortByWeightFunctor
{
    bool operator()(Dog const &lhs, Dog const &rhs) const
    {
        return lhs.m_weight < rhs.m_weight;
    }
};

struct FindByWeightFunctor
{
    FindByWeightFunctor(int weight) : m_weight(weight) {}
    bool operator()(Dog const &dog) const
    {
        return m_weight == dog.m_weight;
    }

    int m_weight;
};

template <typename T>
struct MatchFirstFunctor
{
    MatchFirstFunctor(T i) : m_i(i) {}

    template <typename U>
    bool operator()(U const &pair)
    {
        return pair.first == m_i;
    }

    T m_i;
};

int main()
{
    vector<Dog> v = {Dog(3, 40), Dog(1, 20), Dog(5, 10), Dog(2, 30), Dog(4, 50)};
    sort(begin(v), end(v), SortByWeightFunctor());

    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v.at(i).m_age << " " << v.at(i).m_weight << endl;
    }

    auto res1 = find(begin(v), end(v), 3);
    auto res2 = find_if(begin(v), end(v), FindByWeightFunctor(20));

    cout << "Find results " << res1->m_age << " " << res2->m_weight << endl;

    vector<pair<int, bool>> w = {make_pair(1, true), make_pair(2, false)};
    auto res3 = find(begin(w), end(w), make_pair(2, true));

    cout << "Find results " << res3->first << " " << res3->second << endl;

    auto res4 = find_if(begin(w), end(w), MatchFirstFunctor<int>(2));

    cout << "Find results " << res4->first << " " << res4->second << endl;

    vector<pair<bool, float>> y = {make_pair(true, 1.f), make_pair(false, 2.f)}; // need to make template functors for this
    auto res5 = find_if(begin(y), end(y), MatchFirstFunctor<bool>(true));
    cout << "Find results " << res5->first << " " << res5->second << endl;

    return 0;
}