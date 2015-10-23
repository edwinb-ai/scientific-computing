#include <iostream>

using namespace std;

int main()
{
    double x, y, z;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if ( (x >= y) || (x < 5.0) )
        z = 4.0;
    else
        z = 2.0;

    cout << "The value of z: " << z << endl;

    return 0;
}
