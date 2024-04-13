#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;

//Works with Cmake but not configured with g++


int main(){
    //initialize a dynamic matrix
    Eigen::MatrixXd m1(2,3);
    m1<<1,2,3,
        4,5,6;
    
    cout<<"\nm1=\n"<<m1<<endl;
    cout<<"size m1: "<<m1.rows()<<" X "<<m1.cols()<<endl; 


    //initiaizing dynamic vector
    Eigen::VectorXd v1(3);
    v1<<2,1,2;
    cout<<"\nv1=\n"<<m1<<endl;
    cout<<"size v1: "<<v1.rows()<<" X "<<v1.cols()<<endl;

    //matrix vector multiplication
    Eigen::MatrixXd p1 = m1*v1;
    cout<<"\np1=\n"<<m1<<endl;
    cout<<"size p1: "<<p1.rows()<<" X "<<p1.cols()<<endl;

    //access different elements in the matrix
    for (int i = 0; i < m1.rows(); i++)
    {
        /* code */
        for (int j = 0; j < m1.cols(); j++)
        {
            /* code */
            cout<<"m1("<<i<<", "<<j<<") = "<<m1(i,j)<<endl;
        }
        
    }

    //extracting block
    Eigen::MatrixXd mb1 = m1.block(0,0,2,2) ;  //starting row,starting  column, gap in row, gap in column
    cout<<"\nmb1=\n"<<mb1<<endl;
    cout<<"size mb1: "<<mb1.rows()<<" X "<<mb1.cols()<<endl;

    Eigen::MatrixXd mb2 = m1.block(0,1,2,2) ;  //starting row,starting  column, gap in row, gap in column
    cout<<"\nmb2=\n"<<mb2<<endl;
    cout<<"size mb2: "<<mb2.rows()<<" X "<<mb2.cols()<<endl;

    //concatenating two matrices
    Eigen::MatrixXd concatH(mb1.rows(), mb1.cols()+mb2.cols());
    concatH<<mb1,mb2;
    cout<<"\nconcatH=\n"<<concatH<<endl;
    cout<<"size concatH: "<<concatH.rows()<<" X "<<concatH.cols()<<endl;

    Eigen::MatrixXd concatV(mb1.rows()+mb2.rows(), mb1.cols());
    concatV<<mb1,mb2;
    cout<<"\nconcatV=\n"<<concatV<<endl;
    cout<<"size concatV: "<<concatV.rows()<<" X "<<concatV.cols()<<endl;



    return 0;
}