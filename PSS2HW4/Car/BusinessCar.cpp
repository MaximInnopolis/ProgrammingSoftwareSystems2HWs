#include "BusinessCar.h"

BusinessCar::BusinessCar() {
    setCarType("Business");
    freeBottleOfwater = 10;
}

void BusinessCar::parkRightInFrontOfTheEntrance() {
    cout << "Car with number: " << number << " is parked in front of the entrance" << endl;
}
