#ifndef PSS2HW4_PASSENGERGATEWAY_H
#define PSS2HW4_PASSENGERGATEWAY_H


#include "System.h"

class PassengerGateWay: public System{
public:
    void passengerLogIn(const Passenger& passenger);
    Passenger* getPassenger(string name);

    ~PassengerGateWay();
};


#endif //PSS2HW4_PASSENGERGATEWAY_H
