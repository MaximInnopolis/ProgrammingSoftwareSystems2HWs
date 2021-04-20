#include "BusinessCar.h"

void BusinessCar::parkRightInFrontOfTheEntrance() {
    cout << "Car with number: " << number << " is parked in front of the entrance" << endl;
}

void BusinessCar::decreaseFreeBottleOfWater() {
    freeBottleOfwater--;
}

void BusinessCar::restoreFreeBottleOfwater() {
    freeBottleOfwater = 10;
}
