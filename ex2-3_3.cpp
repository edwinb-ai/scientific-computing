#include <iostream>

using namespace std;

int main()
{
    auto total = 0, currval = 0;

    cout << "Enter numbers to sum. If mistaken, enter -2 to reset total to 0."
        << endl;

    while (true)    //Infinite loop.
    {
        cin >> currval;
        if (total < 100)
        {
            total += currval;
            if (currval == -2)  //Condition to reset total to 0.
                total = 0;
            cout << "Total: " << total << endl;
        }
        else
        {
            cerr << "Total sum is more than 100." << endl;
            break;
        }
    }

    cout << "The total of the sum is: " << total << endl;

    return 0;
}
