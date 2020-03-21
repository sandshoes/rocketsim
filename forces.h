#ifndef FORCES_H
#define FORCES_H
#include <iostream>
using namespace std;
float * gravityAcc(float position[3], float planetPosition[3], float planetMass, float planetRadius);
float * thrustForce(float rocketMass, float fuelMass, float direction[3]);
#endif