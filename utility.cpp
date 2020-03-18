#include "utility.h"
#include <iostream>
#include <string>
#include <cmath>

float vectorModulus (float vector[3]) {
    float modulus = 0;
    for (int n = 0; n < 3; n++) {
        modulus += pow(vector[n],2.0);
    }
    return sqrt(modulus);
}