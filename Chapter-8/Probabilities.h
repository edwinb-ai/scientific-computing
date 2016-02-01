//
// Created by Edwin Bedolla on 2/1/16.
//

#ifndef CHAPTER_8_PROBABILITIES_H
#define CHAPTER_8_PROBABILITIES_H

template<unsigned int DIM> class Probabilities
{
private:
    double abs_error = 1e-6;
    double mData[DIM];

public:
    double& operator[](int index);

};


#endif //CHAPTER_8_PROBABILITIES_H
