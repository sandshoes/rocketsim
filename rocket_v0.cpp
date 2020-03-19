#include <iostream>
#include <string>
#include "forces.h"
//#include "planets.h" has no use atm.
#include "utility.h"
using namespace std;

namespace Earth 
	{
		float mass = 5.972e24;
		float radius = 6.371e6;
		float planetPosition[3] = {0, 0, 0}; 
	}

int main() 
{
	float* gravityVector;
	float position[3] = {6.371e6, 2.5e7, 0};
	gravityVector = gravityCalculator(position, Earth::planetPosition, Earth::mass, Earth::radius);

	cout << *(gravityVector) << endl;
	cout << *(gravityVector + 1) << endl;
	cout << *(gravityVector + 2) << endl;
    
	return 0;
}
