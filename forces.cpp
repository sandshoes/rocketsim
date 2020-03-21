#include "forces.h"
#include "utility.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float * gravityAcc(float position[3], float planetPosition[3], float planetMass, float planetRadius) {

	const float newt_cst = 6.674e-11; // Newton's gravitational constant
	float* gravityVector = new float[3]; 
	float gravityModulus;
	gravityVector = vectorDifference(planetPosition, position); 
	gravityModulus = vectorModulus(gravityVector);

	if (gravityModulus >= planetRadius) {
		for (int n = 0; n < 3; n++) {
			*(gravityVector + n) = ((-newt_cst*planetMass)/pow(gravityModulus,3))*(*(gravityVector + n));
		}
	}
	else {
		cout << "Error: Rocket is inside the planet's surface. Results will be wrong." << endl; 
	}
	return gravityVector; // in N
}										


// Some constants & features in this function will change as the program develops
// This function will matter more when we introduce a gimbaled engine.
float * thrustForce(float rocketMass, float fuelMass, float direction[3]) {
	float thrustArea = 1.0; // in sq meters. Area where propulsive gas comes out
	float pressureExhaust = 120000.0; // in Pa
	float atmosphericPressure = 101325.0; // in Pa
	float exhaustVelocity = 1000; // in m/s, it's the modulus
	float massFlowRate = 0.5; // kg/s, we will assume it's constant for now
	float* thrustVector = new float[3];

	for (int n = 0; n < 3; n++) {
		*(thrustVector + n) = direction[n]*((pressureExhaust - atmosphericPressure)*thrustArea + exhaustVelocity*massFlowRate);
	}
	return thrustVector;
}

void gravityUpdate(float forces[3], float rocketMass, float fuelMass, float position[3], float planetPosition[3], float planetMass, float planetRadius) {

	const float newt_cst = 6.674e-11; // Newton's gravitational constant
	float* gravityVector = new float[3];
	float gravityModulus, totalMass;

	gravityVector = vectorDifference(planetPosition, position); 
	gravityModulus = vectorModulus(gravityVector);
	totalMass = rocketMass + fuelMass;
	if (gravityModulus >= planetRadius) {
		for (int n = 0; n < 3; n++) {
			forces[n] += totalMass*((-newt_cst*planetMass)/pow(gravityModulus,3))*(*(gravityVector + n));
		}
	}
	else {
		cout << "Error: Rocket is inside the planet's surface. Results will be wrong." << endl; 
	}
}										


// Some constants & features in this function will change as the program develops
// This function will matter more when we introduce a gimbaled engine.
float thrustUpdate(float forces[3], float fuelMass, float direction[3]) {
	float thrustArea = 0.5; // in sq meters. Area where propulsive gas comes out
	float pressureExhaust = 102000.0; // in Pa
	float atmosphericPressure = 101325.0; // in Pa
	float exhaustVelocity = 100; // in m/s, it's the modulus
	float massFlowRate = 0.5; // kg/s, we will assume it's constant for now
	if (fuelMass > 0) {
		for (int n = 0; n < 3; n++) {
			forces[n] += direction[n]*((pressureExhaust - atmosphericPressure)*thrustArea + exhaustVelocity*massFlowRate);
		}
		fuelMass -= massFlowRate;
		return fuelMass;
	}
	return 0.0;
}

float forceUpdate(float forces[3], float position[3],  float direction[3], float fuelMass, float rocketMass, float planetPosition[3], float planetMass, float planetRadius) {
	gravityUpdate(forces, rocketMass, fuelMass, position, planetPosition, planetMass, planetRadius);
	fuelMass = thrustUpdate(forces, fuelMass, direction);
	return fuelMass;
} 
