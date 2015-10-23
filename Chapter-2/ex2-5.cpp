/*
    WARNING!!!!

    This code works ONLY for SQUARE matrices. (2 x 2)
*/

#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    double A[2][2] = {{4.0, 10.0},
                      {1.0, 1.0}};

    /*

            Calculate the inverse of A (A^-1).

    */

    //First, calculate determinant.
    double det;
    double i_det;
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    i_det = 1.0 / det;

    //Check if determinant is non-zero.
    assert(det > 0.0);

    //Proceed to calculate inverse.
    double B[2][2];     //B = A^-1
    B[0][0] = i_det * A[1][1];
    B[0][1] = i_det * (-A[0][1]);
    B[1][0] = i_det * (-A[1][0]);
    B[1][1] = i_det * A[0][0];

    cout << "Inverse of matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << B[i][j] << ", ";
        cout << "\t" << endl;
    }
    cout << endl;

    cout << "Proof that is the inverse. A * B = I: " << endl;
    double D[2][2];

    //Do matrix multiplication.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    //Print in "matrix format."
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << D[i][j] << ", ";
        cout << "\t" << endl;
    }
    cout << endl;

    return 0;

}
