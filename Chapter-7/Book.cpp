#include <cassert>
#include "Book.hpp"

// Overriden default constructor
Book::Book()
{
  author = "Unspecified";
  title = "Unspecified";
  publisher = "Unspecified";
  format = "Unspecified";
}

// Overriden copy constructor
Book::Book(const Book& otherBook)
{
  author = otherBook.author;
  title = otherBook.title;
  publisher = otherBook.publisher;
  format = otherBook.format;
  mYearOfPublication = otherBook.GetYearOfPublication();
}

// Specialised constructor
Book::Book(std::string bookTitle)
{
  title = bookTitle;
}

void Book::SetYearOfPublication(int year)
{
  assert ((year > 1440) && (year < 2020));
  mYearOfPublication = year;

}

int Book::GetYearOfPublication() const
{
  return mYearOfPublication;
}
