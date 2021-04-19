#include "System.h"

const vector<Passenger *> &System::getListOfPassengers() const {
    return list_of_passengers;
}

const vector<Driver *> &System::getListOfDrivers() const {
    return list_of_drivers;
}

void System::addDriver(const Driver& driver) {
    list_of_drivers.push_back( new Driver(driver));
}

void System::addPassenger(const Passenger& passenger) {
    list_of_passengers.push_back(new Passenger(passenger));
}

System::~System() {
    for(const auto& dr: list_of_drivers)
        delete dr;
    for(const auto& pa: list_of_passengers)
        delete pa;
    list_of_drivers.clear();
    list_of_passengers.clear();
}