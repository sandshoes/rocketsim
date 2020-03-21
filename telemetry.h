#ifndef TELEMETRY_H
#define TELEMETRY_H
#include <iostream>
using namespace std;
float * velocityUpdate(float velocity[3], float acc[3]);
float * positionalUpdate(float position[3], float velocity[3], float acc[3]);
#endif