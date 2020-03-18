#include <iostream>
#include <string>
#include "forces.h"
#include "planets.h"
#include "utility.h"
using namespace std;

// Fundamental Constants


int main() 
{
	Planet Earth;
	Earth.mass = 5.972e24;
	Earth.radius = 6.371e6;

	float position[3] = {100, 10, 0};
	
	gravityCalculator(position);

	Earth.starting();

	float modulus = vectorModulus(position);

    cout << "Hello, World!" << endl;
    cout << modulus << endl;
    return 0;
}
