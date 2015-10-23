#include <cassert>
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    double x[100], y[100];
    std::ifstream read_file("output.dat");
    assert(read_file.is_open());

    int i = 0;
    while (!read_file.eof())
    {
        read_file >> x[i] >> y[i];
        i++;
    }
    read_file.close();

    return 0;
}
