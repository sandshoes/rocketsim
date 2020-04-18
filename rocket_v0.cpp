#include <iostream>
#include <string>
#include "forces.h"
#include "utility.h"
#include "telemetry.h"
#include "rocket.h"
using namespace std;

// namespace Earth // This will be better off being a struct.
// 	{
// 		float mass = 5.972e24;
// 		float radius = 6.371e6;
// 		float planetPosition[3] = {0, 0, 0}; 
// 	}

// int main() 
// {
// 	bool flightMode = true;
// 	float* gravityVector;
// 	float* thrustVector;
	
// 	float direction[3] = {1, 0, 0}; // unitary vector
// 	float position[3] = {6.371e6, 0, 0}; // in m
// 	float velocity[3] = {0.0, 0, 0}; // in m/s

// 	float rocketMass = 10; // in kg
// 	float fuelMass = 5; // in kg
// 	int count = 0;
// 	float totalMass;

// 	// gravityVector = gravityAcc(position, Earth::planetPosition, Earth::mass, Earth::radius);
// 	// thrustVector = thrustForce(rocketMass, fuelMass, direction);

// 	while (flightMode) {
// 		count += 1;
// 		float forces[3] = {0, 0, 0}; // in N
// 		float acc[3] = {0.0, 0, 0}; // in m/s^2
// 		fuelMass = forceUpdate(forces, position, direction, fuelMass, rocketMass, Earth::planetPosition, Earth::mass, Earth::radius);	
// 		totalMass = fuelMass + rocketMass;
// 		accelerationUpdate(forces, acc, totalMass);
// 		speedUpdate(velocity, acc);
// 		positionUpdate(position, velocity, acc);
// 		if (count < 1000) {

// 			cout << "Total Mass" << endl;
// 			cout << totalMass << endl;

// 			cout << "Fuel Mass" << endl;
// 			cout << fuelMass << endl;

// 			cout << "Forces" << endl;
// 			cout << forces[0] << endl;
// 			cout << forces[1] << endl;
// 			cout << forces[2] << endl;

// 			cout << "Position" << endl;
// 			cout << position[0] << endl;
// 			cout << position[1] << endl;
// 			cout << position[2] << endl;

// 			cout << "Velocity" << endl;
// 			cout << velocity[0] << endl;
// 			cout << velocity[1] << endl;
// 			cout << velocity[2] << endl;

// 			cout << "Acceleration" << endl;
// 			cout << acc[0] << endl;
// 			cout << acc[1] << endl;
// 			cout << acc[2] << endl;
// 		}
// 		flightMode = flightOn(position);
		
// 	}

// 	cout << "Test finished" << endl;
	
// 	return 0;
// }

static bool rocketOn = true;

int main()
{
	Rocket n(35);
	cout << n.getNum() << endl;
	Rocket r(3);
	cout << r.getNum() << endl;
	return 0;
}


// Good idea would be to write an initial configuration of constants that can
// be used throughout the program. (e.g. atmospheric pressure, Newton's gravitational
// constant, etc.)

// Also would be good to have a rocket class to specify dimensions,
// materials and features.

//Config file would work great

// All units must be SI!
// Need to define a timestep
