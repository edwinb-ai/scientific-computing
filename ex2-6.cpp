/*
 *      Newton - Raphson method for the equation
 *      f(x) = e^x + x^3 - 5
 *
*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double xi, xo = 0;

    /*                          //Remove comment to use for loop
    //Using a for loop
    cout << "For loop" << endl;
    for (int i = 0; i < 101; i++)
    {
        xi = xo - ( (exp(xo) + pow(xo, 3) - 5) / (exp(xo) + 3*pow(xo, 2)) );
        cout << "i: " << i << endl;
        printf("xi: %.20f\n", xi);
        xo = xi;
        cout << "xo: " << xo << endl;
    }
    */

    //Using a while loop
    cout << "While loop" << endl;
    double e = 1e-5;
    double diff = 1e-5;
    int cnt = 0;

    while (diff >= e)
    {
        xi = xo - ( (exp(xo) + pow(xo, 3) - 5) / (exp(xo) + 3*pow(xo, 2)) );
        diff = abs(xi - xo);
        xo = xi;
        cout << "xi: " << xi << endl;
        cout << "diff: " << diff << endl;
        cout << "iteration: " << cnt++ << endl;
    }

    return 0;
}
