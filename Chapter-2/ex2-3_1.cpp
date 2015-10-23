#include <iostream>

using namespace std;

int main()
{
    int total = 0, currval = 0;

    while (currval != -1)
    {
        cin >> currval;
        if (currval != -1)
            total += currval;
    }

    cout << "The total of the sum is: " << total << endl;

    return 0;
}
