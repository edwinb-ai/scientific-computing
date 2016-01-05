//
// Created by Edwin Bedolla on 12/31/15.
//

#ifndef CHAPTER_7_EBOOK_H
#define CHAPTER_7_EBOOK_H

#include <string>
#include "Book.hpp"

class Ebook: public Book
{
public:
    Ebook();
    std::string hiddenUrl;
};

#endif //CHAPTER_7_EBOOK_H
