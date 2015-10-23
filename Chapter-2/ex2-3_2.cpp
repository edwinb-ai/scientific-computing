#include <iostream>

//Just a test comment.

using namespace std;

int main()
{
    auto total = 0, currval = 0;

    while (true)
    {
        cin >> currval;
        if (total < 100)
            total += currval;
        else
        {
            cerr << "Total sum is more than 100." << endl;
            break;
        }
    }

    cout << "The total of the sum is: " << total << endl;

    return 0;
}
