//
// Created by Edwin Bedolla on 2/1/16.
//

#ifndef CHAPTER_8_PROBABILITIES_H
#define CHAPTER_8_PROBABILITIES_H

#include <cassert>
#include <iostream>
#include <cmath>    // for std::abs

template<unsigned int DIM> class Probabilities
{
private:
    double abs_error = 1e-6;
    double mData[DIM] {0};

public:
    double& operator[](int index)
    {
        assert(index < DIM);
        assert(index > -1);

        if (mData[index] >= 0.0 && mData[index] <= 1.0)
        {
            return mData[index];
        }

        // Values less than zero
        else if (std::abs(mData[index]) <= abs_error && mData[index] <= 0.0)
        {
            return mData[index] = 0;
        }

        // Values more than one
        else if (mData[index] >= 1.0 && std::abs(mData[index] - 1.0) <= abs_error)
        {
            return mData[index] = 1;
        }

        else
        {
            assert(0);
        }

        return mData[index];

    }



};


#endif //CHAPTER_8_PROBABILITIES_H
