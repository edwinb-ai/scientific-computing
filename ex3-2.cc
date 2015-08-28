#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream read_file("x_and_y.dat");

    if (!read_file.is_open())
    {
        return 1;
    }

    int number_of_rows = 0;
    std::string line;
    while (!read_file.eof())
    {
        std::getline(read_file, line);
        std::stringstream is(line);
        int n_col;
        while (is >> n_col)
            read_file >> n_col;
        number_of_rows++;
    }

    std::cout << "Number of rows = " << number_of_rows << "\n";

    read_file.close();

    return 0;
}
