#include "forces.h"
#include "utility.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float * gravityCalculator(float position[3], float planetPosition[3], float planetMass, float planetRadius) {

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
		cout << "Error: Rocket is inside the planet's surface. results will be wrong." << endl; 
	}
	return gravityVector; // in N
}										
