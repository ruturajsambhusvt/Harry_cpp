#include <iostream>
#include <list>

using namespace std;

// vector has sequential addresses and efficient to access
// List does not and hence it makes it very efficient to add and delete

void display(list<int> &lst)
{
    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); it++)
    {
        /* code */
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(7);

    list<int>::iterator iter;

    // Removing elements from the list
    // list1.pop_back();
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(7);

    //sorting the list
    // list1.sort();

    //Reversing the list
    list1.reverse();


    display(list1);
    

    /* iter = list1.begin();
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl; */

    list<int> list2(3); // Empty lisy of size three
    list<int>::iterator iter1;
    iter1 = list2.begin();
    *iter1 = 45;
    iter1++;
    *iter1 = 65;
    iter1++;
    *iter1 = 86;
    iter1++;
    display(list2);
    list1.sort();
    list2.sort();

    list1.merge(list2);
    cout<<"List1 after merging: ";
    display(list1);

    return 0;
}