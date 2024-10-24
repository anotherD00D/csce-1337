#include <iostream>
#include <vector>

#ifndef DISTANCE_H
#define DISTANCE_H

using namespace std;

class Distance {
    public:
        Distance() : kilometer(0) {};
        friend void drive(Distance& distance);

    private:
        double kilometer;
};

#endif