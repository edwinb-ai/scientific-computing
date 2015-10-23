#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    double x = 1.8364238;
    std::ofstream write_output("precision.dat");

    write_output.precision(3);  // 3 significant figures
    write_output << x << std::endl;

    write_output.precision(5);  // 5 sig figs
    write_output << x << std::endl;

    write_output.precision(10); // 10 sig figs
    write_output << x << std::endl;
    write_output.close();

    return 0;
}
