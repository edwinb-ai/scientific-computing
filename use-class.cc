#include <iostream>
#include "Book.hpp"

int main()
{
  Book my_favorite_book;

  my_favorite_book.author = "Lewis Carroll";
  my_favorite_book.title =
    "Alice's adventure in Wonderland";
  my_favorite_book.publisher = "Macmillan";
  my_favorite_book.price = 199;
  my_favorite_book.format = "hardback";
  my_favorite_book.yearOfPublication = 1865;

  std::cout << "Year of publication of "
            << my_favorite_book.title << " is "
            << my_favorite_book.yearOfPublication << std::endl;

  return 0;

}
