#ifndef PSS2HW4_SYSTEM_H
#define PSS2HW4_SYSTEM_H

#include "vector"
#include "Passenger.h"
#include "Driver.h"

class System {
protected:
    vector<Passenger*> list_of_passengers;
    vector<Driver*> list_of_drivers;

public:
    string name = "Wendex.taxi";

    const vector<Passenger *> &getListOfPassengers() const;
    const vector<Driver *> &getListOfDrivers() const;

    void addPassenger(const Passenger&);
    void addDriver(const Driver&);
    virtual ~System();
};
#endif //PSS2HW4_SYSTEM_H