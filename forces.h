#ifndef FORCES_H
#define FORCES_H
#include <iostream>
using namespace std;
float * gravityAcc(float position[3], float planetPosition[3], float planetMass, float planetRadius);
float * thrustForce(float rocketMass, float fuelMass, float direction[3]);
void gravityUpdate(float forces[3], float rocketMass, float fuelMass, float position[3], float planetPosition[3], float planetMass, float planetRadius);
float thrustUpdate(float forces[3], float fuelMass, float direction[3]);
float forceUpdate(float forces[3], float position[3],  float direction[3], float fuelMass, float rocketMass, float planetPosition[3], float planetMass, float planetRadius);
#endif