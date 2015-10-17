#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <string>

class Book
{
public:
  std::string author, title, publisher, format;
  int price;    //Given in pence ¿?
  void SetYearOfPublication(int year);
  int GetYearOfPublication() const;
private:
  int mYearOfPublication;
};    //Note the class ends with a ;

#endif
