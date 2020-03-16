#include <iostream>
#include <string>
#include "forces.h"
#include "planets.h"
using namespace std;

// Fundamental Constants
const float newt_cst = 6.674e-11; // Newton's gravitational constant

int main() 
{
	Planet Earth;
	Earth.mass = 5.972e24;
	Earth.radius = 6.371e6;

	float position[3] = {100, 0, 0};

	gravityCalculator(position);

	Earth.starting();

    cout << "Hello, World!" << endl;
    return 0;
}
