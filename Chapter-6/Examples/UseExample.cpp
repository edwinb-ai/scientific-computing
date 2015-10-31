#include <iostream>
#include "ExampleClass.hpp"

int main()
{
  ExampleClass example(2.0, 3.0);
  std::cout << "Minimum value: " << example.GetMinimum()
	    << "\n";
  std::cout << "Maximum value: " << GetMaximum(example) << "\n";

  return 0;
}
