#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    char getPrice(void);
    void displayPrice(void);
};

char Shop ::getPrice(void)
{   
    char a;
    cout << "Enter Id of your item no." << counter << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    cout << "Want to continue? Y/N" << endl;
    cin>>a;
    counter++;
    return a;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "The price of item with Id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    char exit_status;
    while (true)
    {
        /* code */
        exit_status = dukaan.getPrice();
        if(exit_status=='N'){
            break;
        }

    }
    
    dukaan.displayPrice();

    return 0;
}