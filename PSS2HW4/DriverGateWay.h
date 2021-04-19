#ifndef PSS2HW4_DRIVERGATEWAY_H
#define PSS2HW4_DRIVERGATEWAY_H


#include "System.h"

class DriverGateWay{
private:
    System* system;
public:
    explicit DriverGateWay(System *system);

    void driverLogIn(const Driver& driver);
    Driver* getDriver(const string &name);
};


#endif //PSS2HW4_DRIVERGATEWAY_H
