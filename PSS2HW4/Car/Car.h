#ifndef PSS2HW4_CAR_H
#define PSS2HW4_CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string number;
    string model;
    string color;
    string carType;
    void setCarType(string car_type);
    virtual ~Car() = default;
};


#endif //PSS2HW4_CAR_H
