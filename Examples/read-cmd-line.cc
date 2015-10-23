#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[]) {
    std::cout << "Number of command line arguments: " << argc << std::endl;
    for (size_t i = 0; i < argc; i++)
    {
        std::cout << "Argument " << i << " = " << argv[i];
        std::cout << std::endl;
    }

    std::string program_name = argv[0];
    int number_of_nodes = atoi(argv[1]);
    double conductivity = atof(argv[2]);
    std::cout << "Program name = " << program_name << std::endl;
    std::cout << "Number of nodes = "<< number_of_nodes << std::endl;
    std::cout << "Conductivity = "<< conductivity << std::endl;

    return 0;
}
