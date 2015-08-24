/*
 * =====================================================================================
 *
 *       Filename:  scientific-notation.cc
 *
 *    Description:  Scientific notation example.
 *
 *        Version:  1.0
 *        Created:  23/08/15 18:47:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <fstream>

int main()
{
	std::ofstream write_file("outputformatted.dat");
	//Write numbers as +x.<13digits>e+00 (width 20)
	write_file.setf(std::ios::scientific);
	write_file.setf(std::ios::showpos);
	write_file.precision(13);

	double x = 3.4, y = 0.0000855, z = 984.424;
	write_file << x << " " << y << " " << z << std::endl;

	write_file.close();
	return 0;
}
