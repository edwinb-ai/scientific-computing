#include <iostream>
//#include <algorithm>  // For std::iter_swap

int main()
{
  int x = 5, y = 10;
  std::cout << "x: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
  int* p_x, *p_y, *p_z;
  p_x = &x;  p_y = &y;
  //std::iter_swap(p_x, p_y);   // Using the STL
  p_z = p_y; p_y = p_x; p_x = p_z;
  std::cout << "x is now y: " << *p_x << std::endl;
  std::cout << "y is now x: " << *p_y << std::endl;

  return 0;
}
