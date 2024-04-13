// Source: https://www.youtube.com/watch?v=FOwynli0W0Q&list=PLk6CEY9XxSIDrUSEc8HE_FreUr3Zu4ezT&index=4&ab_channel=CppNuts

// Summary: Using GDB to set variables in the constructor of a class

#include <iostream>

class Node{
    public:
    int data;
    Node* next;
    // public:
    Node(int x, Node* next_loc= nullptr):data{x},next{next_loc}{}; //constructor of class Node is initializing the object of class Node
};

int main()
{
    Node a(1,NULL);
    Node b(2, NULL);
    std::cout << "a.data: " << a.data <<"a.next: "<<a.next<< std::endl;
    std::cout << "b.data: " << b.data <<"b.next: "<<b.next<< std::endl;
    return 0; 
    
}

// gdb commands list
// set variable variable_name = value


// Logging
// set logging enabled on
// set logging file myfile.txt
// set logging overwrite on
