#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <fstream>

int main(int argc, char const *argv[]) {
    double y_prev = 1.0, y_next;

    // Read argument from command line
    double n_grid =  atoi(argv[1]);

    // Open data file
    std::ofstream write_output("xy.dat");
    std::ofstream data_output("proof.dat");
    
    // Assert statement for N
    assert(n_grid > 1);

    /* Execute Euler's method */
    //Calculate step size
    double h_step;
    h_step = 1.0 / n_grid;
    
    for (int i = 0.0; i < n_grid; i++)
    {
        y_next = y_prev + (h_step * (-y_prev));
        y_prev = y_next;
	
	// Write data to file
	double x_axis = (i/n_grid);
	write_output << x_axis << " " << y_prev << "\n";
    }

    // Close file
    write_output.close();


    /*Calculate y=e^-x to prove values */
    double y_exp = 0.0;
    for (int i = 0; i < n_grid; i++)
      {
	double x_axis = (i/n_grid);
	y_exp = exp(-x_axis);
	data_output << x_axis << " " << y_exp << "\n";
      }
      data_output.close();
    
    return 0;
}
