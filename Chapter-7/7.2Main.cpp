//
// Created by Edwin Bedolla on 1/25/16.
//

#include <iostream>

class AbstractPerson
{
public:
    virtual void Print() = 0;
};

class Mother : public AbstractPerson
{
public:
    virtual void Print()
    {
        std::cout << "Mother\n";
    }
};

class Daughter : public Mother
{
public:
    virtual void Print()
    {
        std::cout << "Daughter\n";
    }
};

int main()
{
    AbstractPerson* p_mother = new Mother;
    AbstractPerson* p_daughter = new Daughter;

    p_mother->Print();
    p_daughter->Print();

    delete p_mother;
    delete p_daughter;

    return 0;
}

