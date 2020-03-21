#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Both functions need to be completely rethought
float * velocityUpdate(float velocity[3], float acc[3]) {
    float timestep = 0.01;
    float* velocityUpdated = new float[3];
    for (int n = 0; n < 3; n++) {
        *(velocityUpdated + n) = acc[n]*timestep + velocity[n];  
    }
    return velocityUpdated;
}

float * positionalUpdate(float position[3], float velocity[3], float acc[3]) {
    float timestep = 0.01;
    float *positionUpdated = new float[3];
    for (int n = 0; n < 3; n++) {
        *(positionUpdated + n) = position[n] + velocity[n]*timestep + 0.5*acc[n]*pow(timestep,2);  
    }
    return positionUpdated;
}