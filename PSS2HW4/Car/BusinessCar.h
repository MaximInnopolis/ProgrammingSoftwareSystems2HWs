#ifndef PSS2HW4_BUSINESSCAR_H
#define PSS2HW4_BUSINESSCAR_H


#include "Car.h"

class BusinessCar : public Car {
public:
    BusinessCar() {
        setCarType("Business");
        freeBottleOfwater = 10;
    }
    BusinessCar(const Car& car) : Car(car) {};
    int freeBottleOfwater;
    void parkRightInFrontOfTheEntrance();
};


#endif //PSS2HW4_BUSINESSCAR_H
