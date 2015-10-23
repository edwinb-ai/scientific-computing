#include <iostream>
#include <cassert>
#include <fstream>

int main()
{

    double x[3] = {0.0, 1.0, 0.0};
    double y[3] = {0.0, 0.0, 1.0};
    const int COUNT = 3;

    std::ofstream write_output("output.dat", std::ios::app);
    assert(write_output.is_open());
    for (size_t i = 0; i < COUNT; i++)
    {
        write_output << x[i] << " " << y[i] << std::endl;
    }
    write_output.close();

    return 0;
}
