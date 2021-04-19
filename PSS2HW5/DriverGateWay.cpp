#include "DriverGateWay.h"

void DriverGateWay::driverLogIn(const Driver &driver) {
    system->addDriver(driver);
}

Driver *DriverGateWay::getDriver(const string &name) {
    for (const auto &d: system->getListOfDrivers())
        if(d->getName() == name)
            return d;
    return nullptr;
}
DriverGateWay::DriverGateWay(System *system) : system(system) {}
