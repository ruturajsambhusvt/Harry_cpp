#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <utility>

using namespace std;

struct OrderPairsByFirstValue
{
    /* data */
    template <typename T, typename U>
    bool operator()(T const &lhs, U const &rhs) const
    {
        return lhs.first > rhs.first;  //decreasing order sort
    }
};

template <class T1, class T2>
void print_vec_pair(vector<pair<T1, T2>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v.at(i).first << " " << v.at(i).second << endl;
    }
}

int main()
{

    vector<pair<int, double>> v1 = {make_pair(1, 1.2), make_pair(2, 2.3), make_pair(3, 3.5)};
    vector<pair<bool, char>> v2 = {make_pair(true, 'a'), make_pair(false, 'b'), make_pair(true, 'r')};
    print_vec_pair(v1);
    cout << "done" << endl;
    print_vec_pair(v2);
    cout << "done" << endl;
    OrderPairsByFirstValue functor;
    sort(begin(v1), end(v1), functor);
    // sort(begin(v1), end(v1), OrderPairsByFirstValue());
   /*  sort(begin(v1), end(v1), [](auto const &lhs, auto const &rhs)
         { return lhs.first >
          rhs.first; });
 */
    // sort(begin(v2), end(v2), OrderPairsByFirstValue());
    auto lambda = [](auto const &lhs, auto const &rhs)  //auto not mandatory if we know the type we can use. Lambda gets turned into structure by compiler we dont know, or make lambda into function pointer
         { return lhs.first >
          rhs.first; };

    /* function<bool(pair<int,double>,pair<int,double>)> lambda = [](auto const &lhs, auto const &rhs)  //function is a wrapper around function pointer
         { return lhs.first >
          rhs.first; };
 */

    sort(begin(v2), end(v2), lambda);
    print_vec_pair(v1);
    cout << "done" << endl;
    print_vec_pair(v2);

    pair<int, double> p1;
    pair<bool, char> p2;
    return 0;
}