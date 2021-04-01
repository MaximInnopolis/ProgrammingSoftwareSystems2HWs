#ifndef PSS2HW4_SYSTEM_H
#define PSS2HW4_SYSTEM_H


#include "vector"
#include "Passenger.h"
#include "Driver.h"

class System {
public:

    string name = "Wendex.taxi";

    void driverLogIn(const Driver& driver);
    void passengerLogIn(const Passenger& passenger);

    Passenger* getPassenger(string name);
    Driver* getDriver(string name);
private:
    vector<Passenger*> list_of_passengers;
    vector<Driver*> list_of_drivers;
};


#endif //PSS2HW4_SYSTEM_H
