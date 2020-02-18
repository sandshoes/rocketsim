// this program will become
// a rocket simulation.

#include <iostream>
#include <string>
using namespace std;

const float g = 6.674e-11; //Newton's gravitational constant

int main() 
{
	float m = 10;
	float weight = m * g;
	cout << weight << endl;
    cout << "Hello, World!" << endl;
    return 0;
}