#ifndef PSS2HW5_CAR_H
#define PSS2HW5_CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string number;
    string model;
    string color;
    string carType;
    void setCarType(const string &car_type);
    virtual ~Car() = default;
};



#endif //PSS2HW5_CAR_H
