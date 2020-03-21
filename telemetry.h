#ifndef TELEMETRY_H
#define TELEMETRY_H
#include <iostream>
using namespace std;
float * velocityUpdate(float velocity[3], float acc[3]);
float * positionalUpdate(float position[3], float velocity[3], float acc[3]);
void accelerationUpdate(float forces[3], float acc[3], float totalMass);
void speedUpdate(float velocity[3], float acc[3]);
void positionUpdate(float position[3], float velocity[3], float acc[3]);
bool flightOn(float position[3]);
#endif