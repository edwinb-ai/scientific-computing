//
// Created by Edwin Bedolla on 2/1/16.
//

#include "Probabilities.h"
#include <cassert>

template<unsigned int DIM>
double& Probabilities<DIM>::operator[](int index)
{
    assert(index < DIM);
    assert(index > -1);
    return(mData[index]);
}
