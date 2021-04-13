#ifndef PSS2HW4_COMFORTPLUSCAR_H
#define PSS2HW4_COMFORTPLUSCAR_H


#include "Car.h"

class ComfortPlusCar : public Car {
public:
    ComfortPlusCar() {
        setCarType("ComfortPlus");
        freeBottleOfwater = 5;
    }
    int freeBottleOfwater;
};


#endif //PSS2HW4_COMFORTPLUSCAR_H
