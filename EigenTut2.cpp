#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
    // matrix transpose
    Eigen::MatrixXd m1(2, 2);
    m1 << 1, 2, 3, 4;
    cout << "\nm1 = \n"
         << m1 << endl;

    // transpose
    // m1 = m1.transpose();
    m1.transposeInPlace();
    cout << "\nm1 = \n"
         << m1 << endl;

    m1 = m1.transpose().eval();
    cout << "\nm1 = \n"
         << m1 << endl;

    // matrix matrix multiplication

    Eigen::MatrixXd m2(2, 2);
    m2 << 5, 6, 8, 9;

    Eigen::MatrixXd m3(3, 2);
    m3 << 1, 2, 3, 4, 5, 6;
    m2 << 5, 6, 8, 9;
    m2 = m3 * m2;

    cout << "\nm2 = \n"
         << m2 << endl;

    Eigen::MatrixXd m4(3, 2);

    Eigen::MatrixXd m5(2, 2);
    m5 << 1,2,3,4;

    m4.noalias() = m3 * m5; // elling compiler to assure no aliasing and saving time
    cout << "\nm4 = \n"
         << m4 << endl;


    // element by element operations are good for aliasing
    m3 = 0.5*m3;
    cout << "\nm3 = \n"
         << m3 << endl;

    m5 = m5 + Eigen::MatrixXd::Identity(2,2);
    cout << "\nm5 = \n"
         << m5 << endl;

    cout << "\nm1 inverse = \n"
         << m1.inverse() << endl;


    //inverse

    
    return 0;
}
