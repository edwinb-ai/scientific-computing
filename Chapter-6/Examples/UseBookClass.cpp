#include <iostream>
#include "Book.hpp"

int main()
{
  Book promotion_book;

  promotion_book.author = "Iris Murdoch";
  promotion_book.title = "The sea, the sea";
  promotion_book.publisher = "Chatto & Windus";
  promotion_book.price = 299;
  promotion_book.format = "hardback";
  promotion_book.SetYearOfPublication(1978);

  std::cout << "Year of publication of "
	    << promotion_book.title << " is "
	    << promotion_book.GetYearOfPublication()
	    << std::endl;

  return 0;

}
