#include "ComplexNumber.hpp"
#include <iostream>

int main()
{
  ComplexNumber z1(4.0, 3.0);

  std::cout << "z1 = " << z1 << "\n";
  std::cout << "Modulus z1 = "
	    << z1.CalculateModulus() << "\n";
  std::cout << "Argument z1 = "
	    << z1.CalculateArgument() << "\n";

  ComplexNumber z2;
  z2 = z1.CalculatePower(3);
  std::cout << "z2 = z1*z1*z1 = " << z2  << "\n";

  ComplexNumber z3;
  z3 = -z2;
  std::cout << "z3 = -z2 = " << z3  << "\n";

  ComplexNumber z4;
  z4 = z1 + z2;
  std::cout << "z1 + z2 = " << z4  << "\n";

  ComplexNumber zs[2];
  zs[0] = z1;
  zs[1] = z2;
  std::cout << "Second element of zs = "
	    << zs[1] << "\n";

  ComplexNumber z5(5.0,9.0);
  std::cout << "Complex number with just the real part = " << z5 << "\n";
  std::cout << "Real part (friend) = " << GetRealPart(z5)  << "\n";
  std::cout << "Imaginary part (friend) = " << GetImaginaryPart(z5)  << "\n";
  std::cout << "Conjugate = " << z5.CalculateConjugate()  << "\n";
  
  // Assing values to complex matrix
	ComplexMatrix A(3.0, 3.0);
	int iRows = A.GetNumberOfRows(), iCols = A.GetNumberOfCols();
	ComplexNumber z6(6.0,7.0), z7(8.0, 10.0), z8(1.0,2.0), z9(9.0,6.0);
	ComplexNumber aNumbers[3][3] = {{z1,z2,z3},{z4,z5,z6},{z7,z8,z9}};

	for (int i = 0; i < iRows; i++)
	{
		for (int j = 0; j < iCols; j++)
			{
				A(i,j) = aNumbers[i][j];
			}
	}
	std::cout << "Matrix A: " << A << "\n";

	return 0;
}

