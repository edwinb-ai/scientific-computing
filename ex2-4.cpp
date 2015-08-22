#include <iostream>

using namespace std;

int main()
{
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};

    double B[3][3] = {{-2.0, 0.0, 1.0},
                      {1.0, 0.0, 0.0},
                      {4.0, 1.0, 0.0}};

    double w[3];

    //Calculate and print vector w = u - 3v
    for (int i = 0; i < 3; i++)
    {
        w[i] = u[i] - 3.0 * v[i];
    }
    cout << "Vector 'w': ";
    for (int i = 0; i < 3; i++)
        cout << w[i] << ", ";
    cout << endl;

    //Calculate and print vector x = u - v
    double x[3];

    for (int i = 0; i < 3; i++)
        x[i] = u[i] - v[i];
    cout << "Vector 'x': ";
    for (int i = 0; i < 3; i++)
        cout << x[i] << ", ";
    cout << endl;

    //Calculate and print vector y = A * u
    double y[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            y[i] += A[i][j] * u[j];
        }
    }
    cout << "Vector 'y': ";
    for (int i = 0; i < 3; i++)
        cout << y[i] << ", ";
    cout << endl;

    //Calculate and print vector z = A*u - v
    double z[3];

    for (int i = 0; i < 3; i++)
    {
        z[i] = y[i] - v[i];
    }
    cout << "Vector 'z': ";
    for (int i = 0; i < 3; i++)
        cout << z[i] << ", ";
    cout << endl;

    //Calculate and print matrix C = 4*A - 3*B
    double C[3][3];
    double c[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[j] = (4 * A[j][i]) - (3 * B[j][i]);
            C[j][i] = c[j];
        }
    }
    cout << "Matrix 'C': " << endl;;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << C[i][j] << ", ";
        cout << "\t" << endl;
    }
    cout << endl;

    //Calculate and print matrix D = A * B
    double D[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Matrix 'D': " << endl;;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << D[i][j] << ", ";
        cout << "\t" << endl;
    }
    cout << endl;


    return 0;
}
