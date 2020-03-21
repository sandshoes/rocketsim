#include <iostream>
#include <string>
#include "forces.h"
//#include "planets.h" has no use atm.
#include "utility.h"
#include "telemetry.h"
using namespace std;

// Good idea would be to write an initial configuration of constants that can
// be used throughout the program. (e.g. atmospheric pressure, Newton's gravitational
// constant, etc.)

// Also would be good to have a rocket class to specify dimensions,
// materials and features.

//Config file would work great

// All units must be SI!
// Need to define a timestep

namespace Earth // This will be better off being a struct.
	{
		float mass = 5.972e24;
		float radius = 6.371e6;
		float planetPosition[3] = {0, 0, 0}; 
	}

int main() 
{
	bool flightMode = true;
	float* gravityVector;
	float* thrustVector;
	float position[3] = {6.371e6, 0, 0}; // in m
	float direction[3] = {1, 0, 0}; // unitary vector
	float rocketMass = 10; // in kg
	float fuelMass = 5; // in kg
	gravityVector = gravityAcc(position, Earth::planetPosition, Earth::mass, Earth::radius);
	thrustVector = thrustForce(rocketMass, fuelMass, direction);

	// while (flightMode) {

	// }

	cout << *(gravityVector) << endl;
	cout << *(gravityVector + 1) << endl;
	cout << *(gravityVector + 2) << endl;

    cout << *(thrustVector) << endl;
	cout << *(thrustVector + 1) << endl;
	cout << *(thrustVector + 2) << endl;
	
	return 0;
}
