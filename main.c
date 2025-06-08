#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int main() {
    srand(time(NULL)); 

    for (int i = 0; i < 5; ++i) {
        printf("Random Normal: %f\n", random_normal());
    }

    return 0;
}
