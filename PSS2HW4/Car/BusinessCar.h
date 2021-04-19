#ifndef PSS2HW4_BUSINESSCAR_H
#define PSS2HW4_BUSINESSCAR_H


#include "Car.h"

class BusinessCar : public Car {
public:
    BusinessCar();
    int freeBottleOfwater;
    void parkRightInFrontOfTheEntrance();
};


#endif //PSS2HW4_BUSINESSCAR_H
