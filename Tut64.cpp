#include <iostream>
using namespace std;

template <class T>
class vector
{

public:
    T *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            /* code */
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{

    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;

    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 2;
    // v2.arr[2] = 3;

    vector<float> v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.8;
    v1.arr[2] = 1.2;

    vector<float> v2(3);
    v2.arr[0] = 1.9;
    v2.arr[1] = 2.2;
    v2.arr[2] = 3.6;

    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}