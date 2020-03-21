#include <iostream>
#include <string>
#include <cmath>
#include "utility.h"
using namespace std;

// Both functions need to be completely rethought
float * velocityUpdate(float velocity[3], float acc[3]) {
    float timestep = 0.5;
    float* velocityUpdated = new float[3];
    for (int n = 0; n < 3; n++) {
        *(velocityUpdated + n) = acc[n]*timestep + velocity[n];  
    }
    return velocityUpdated;
}

float * positionalUpdate(float position[3], float velocity[3], float acc[3]) {
    float timestep = 0.5;
    float *positionUpdated = new float[3];
    for (int n = 0; n < 3; n++) {
        *(positionUpdated + n) = position[n] + velocity[n]*timestep + 0.5*acc[n]*pow(timestep,2);  
    }
    return positionUpdated;
}

void accelerationUpdate(float forces[3], float acc[3], float totalMass) {
    float timestep = 0.5;
    for (int n = 0; n < 3; n++) {
        acc[n] = forces[n]/totalMass;
    }
}

void speedUpdate(float velocity[3], float acc[3]) {
    float timestep = 0.5;
    for (int n = 0; n < 3; n++) {
        velocity[n] += acc[n]*timestep;
    }
}

void positionUpdate(float position[3], float velocity[3], float acc[3]) {
    float timestep = 0.5;
    for (int n = 0; n < 3; n++) {
        position[n] += velocity[n]*timestep + 0.5*acc[n]*pow(timestep,2);
    }
}

bool flightOn(float position[3]) {
    if (vectorModulus(position) < 6.371e6) {
        return false;
    }
    return true;
}