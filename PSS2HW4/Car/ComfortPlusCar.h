#ifndef PSS2HW4_COMFORTPLUSCAR_H
#define PSS2HW4_COMFORTPLUSCAR_H


#include "Car.h"

class ComfortPlusCar : public Car {
public:
    ComfortPlusCar() {
        setCarType("ComfortPlus");
        freeBottleOfwater = 5;
    }
    explicit ComfortPlusCar(const Car& car) : Car(car) {};
    int freeBottleOfwater;
    void decreaseFreeBottleOfwater();
    void restoreFreeBottleOfwater();
};


#endif //PSS2HW4_COMFORTPLUSCAR_H
