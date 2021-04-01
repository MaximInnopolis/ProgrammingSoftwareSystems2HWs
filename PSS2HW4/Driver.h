#ifndef PSS2HW4_DRIVER_H
#define PSS2HW4_DRIVER_H

#include <string>
#include "Car.h"

using namespace std;

class Driver {
public:
    Driver(string _name){name = _name;}
    string getName(){return name;}
    string name;
    int rating;
    Car* car;
};


#endif //PSS2HW4_DRIVER_H
