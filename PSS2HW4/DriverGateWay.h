#ifndef PSS2HW4_DRIVERGATEWAY_H
#define PSS2HW4_DRIVERGATEWAY_H


#include "System.h"

class DriverGateWay: public System{
public:
    void driverLogIn(const Driver& driver);
    Driver* getDriver(string name);
};


#endif //PSS2HW4_DRIVERGATEWAY_H
