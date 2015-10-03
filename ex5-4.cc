#include <iostream>
#include <cassert>
#include <cmath>
#include <cstdlib>

double Mean(double* a, int size);
double StandardDev(double* a, int size, double mean);
void MeanandSD(double* a, int size);
void RandomValues(double* a, int size);

int main()
{
    // Define array
    const int SIZE = 2000000;
    double* aValues = new double [SIZE];
    RandomValues(aValues, SIZE);
    /*for (int i = 0; i < SIZE; i++)
    {
        std::cout << aValues[i] << " , ";
    }
    std::cout << std::endl;*/
    MeanandSD(aValues, SIZE);
    delete [] aValues;

    return 0;
}

double Mean(double* a, int size)
{
    double sum = 0, mean;
    assert (size > 0);
    // Calculate sum of all values in array
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    mean = sum / size;
    return mean;
}

double StandardDev(double* a, int size, double mean)
{
    double sum = 0, standard_deviation;
    mean = Mean(a, size);
    assert(size > 0);

    for (int i = 0; i < size; i++)
    {
        sum += pow( (a[i] - mean) , 2);
    }

    standard_deviation = sqrt( (sum) / (size - 1) );

    return standard_deviation;
}

void MeanandSD(double* a, int size)
{
    std::cout << "Mean of array: " <<
        Mean(a, size) << std::endl;
    std::cout << "Standard Deviation: " <<
        StandardDev(a, size, Mean(a, size)) << std::endl;
}

void RandomValues(double* a, int size)
{
    ;
    for (int i = 0; i < size; i++)
    {
        double rand_val = rand() % 101;
        a[i] = rand_val;
    }
}
