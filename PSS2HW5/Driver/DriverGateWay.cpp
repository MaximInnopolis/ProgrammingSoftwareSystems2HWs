#include "DriverGateWay.h"

void DriverGateWay::driverLogIn(const Driver &driver) {
    system->addDriver(driver);
}

Driver *DriverGateWay::getDriver(const string &name) {
    for (const auto &a: system->getListOfDrivers())
        if(a->getName() == name)
            return a;
    return nullptr;
}
DriverGateWay::DriverGateWay(System *system) : system(system) {}