#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{

    // Dynamic -resizable
    Eigen::MatrixXd d, c; // stack storage size more than 32 use dynamic matrix

    // Fixed size matrix
    Eigen::Matrix3d f; // heap storage
    cout << f.size() << endl;
    cin.get();

    f << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;

    cout << "\nf = \n"
         << f << endl;

    d = MatrixXd::Random(5, 5);

    cout << "\nd = \n"
         << d << endl;

    c = MatrixXd::Constant(5, 5,4.0);

    cout << "\nc = \n"
         << c << endl;


    

    return 0;
}