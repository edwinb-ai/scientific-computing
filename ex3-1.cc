#include <iostream>
#include <cassert>
#include <fstream>

int main()
{
	double x[4] = {0.0, 1.0, 1.0, 0.0};
	double y[4] = {0.0, 0.0, 1.0, 1.0};

	std::ofstream write_output("x_and_y.dat");
	write_output.setf(std::ios::scientific);
	write_output.setf(std::ios::showpos);
	write_output.precision(10);
	assert(write_output.is_open());

	//Start loop for x-array
	for (size_t i = 0; i < 4; i++)
	  {
	    write_output << x[i] << "\t";
	  }
	
	write_output << "\n";  //Put a newline character in the file.
	write_output.flush();
	
	//Start loop for y-array
	for (size_t i = 0; i < 4; i++)
	  {
	    write_output << y[i] << "\t";
	  }

	write_output << "\n";
	write_output.flush();  //Flush file after line
	
	write_output.close();  //Close file
	
	return 0;
}
