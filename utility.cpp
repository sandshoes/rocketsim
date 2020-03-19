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

float* vectorDifference (float vectorA[3], float vectorB[3]) {
    float* difference = new float[3];
    for (int n = 0; n < 3; n++) {
        difference[n] = vectorB[n] - vectorA[n];
    }
    return difference;
}