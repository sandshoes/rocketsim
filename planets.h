#ifndef PLANETS_H
#define PLANETS_H
#include <iostream>
using namespace std;


class Planet {
    public:
        float mass,radius;
        float planetPosition[3];
        int starting();
};

#endif