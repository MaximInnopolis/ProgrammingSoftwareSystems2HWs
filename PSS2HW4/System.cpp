#include "System.h"

void System::driverLogIn(const Driver &driver) {
    list_of_drivers.push_back(new Driver(driver));
}

void System::passengerLogIn(const Passenger &passenger) {
    list_of_passengers.push_back(new Passenger(passenger));
}

Passenger *System::getPassenger(string name) {
    for (auto p : list_of_passengers)
        if(p->getName() == name)
            return p;
    return nullptr;
}

Driver *System::getDriver(string name) {
    for (auto d: list_of_drivers)
        if(d->getName() == name)
            return d;
    return nullptr;
}