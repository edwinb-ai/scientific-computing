/*
 * =====================================================================================
 *
 *       Filename:  loop-test.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/13/2015 22:29:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Edwin Bedolla (lorenz_attractor), developedwin@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

int main()
{
	const int size = 5;
	for (int i = 0; i < size; i++)
	{
		std::cout << i << std::endl;
	}

	for (int i = 0; i < size+1; i++)
	{
		std::cout << i << std::endl;
	}

	for (int i = 0; i < size-1; i++)
	{
		std::cout << i << std::endl;
	}

	return 0;
}

