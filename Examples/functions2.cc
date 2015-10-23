#include <iostream>

void PrintPassorFail(int score, int passMark);

int main()
{
    int score = 29, pass_mark = 30;
    PrintPassorFail(score, pass_mark);

    return 0;
}

void PrintPassorFail(int score, int passMark)
{
    if (score >= passMark)
    {
        std::cout << "Pass - congratulations!" << std::endl;
    }
    else
    {
        std::cout << "Fail - better luck next time!" << std::endl;
    }
}
