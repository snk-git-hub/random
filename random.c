#include <stdlib.h>
#include <math.h>
#include "random.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double random_normal(void) {
    double u1 = ((double) rand() + 1) / ((double) RAND_MAX + 2);
    double u2 = ((double) rand() + 1) / ((double) RAND_MAX + 2);
    
    return sqrt(-2.0 * log(u1)) * cos(2.0 * M_PI * u2);
}
