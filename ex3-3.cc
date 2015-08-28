#include <cmath>
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <fstream>

int main(int argc, char const *argv[]) {
    double xo = 0.0, xn, y_prev = 0.0, y_next;
    int n_grid =  atoi(argv[0]);

    // Assert statement for N
    assert(n_grid > 1);

    /* Execute Euler's method */
    //Calculate step size
    double h_step;
    h_step = 1.0 / n_grid;

    for (size_t i = 0; i < (n_grid - 1); i++)
    {
        y_next = y_prev[i] + (h_step * (-y_prev[i]));
        y_prev = y_next;
    }

    return 0;
}
