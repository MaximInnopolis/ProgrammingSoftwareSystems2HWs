#include "PassengerGateWay.h"

void PassengerGateWay::passengerLogIn(const Passenger &passenger) {
    system->addPassenger(passenger);
}

Passenger *PassengerGateWay::getPassenger(const string &name) {
    for (const auto& p : system->getListOfPassengers())
        if(p->getName() == name)
            return p;
    return nullptr;
}

PassengerGateWay::PassengerGateWay(System *system) : system(system){}