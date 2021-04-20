#ifndef PSS2HW5_PASSENGERGATEWAY_H
#define PSS2HW5_PASSENGERGATEWAY_H

#include "../System.h"

class PassengerGateWay{
private:
    System* system;
public:
    explicit PassengerGateWay(System *system);

    void passengerLogIn(const Passenger& passenger);
    Passenger* getPassenger(const string &name);
};


#endif //PSS2HW5_PASSENGERGATEWAY_H