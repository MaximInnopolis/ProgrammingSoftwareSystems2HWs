#ifndef PSS2HW5_SYSTEM_H
#define PSS2HW5_SYSTEM_H

#include "vector"
#include "Passenger/Passenger.h"
#include "Driver/Driver.h"
#include "Admin/Admin.h"

class System {
protected:
    vector<Passenger*> list_of_passengers;
    vector<Driver*> list_of_drivers;
    vector<Admin*> list_of_admins;
public:
    string name = "Wendex.taxi";

    const vector<Passenger *> &getListOfPassengers() const;
    const vector<Driver *> &getListOfDrivers() const;
    const vector<Admin *> &getListOfAdmins() const;

    void addPassenger(const Passenger&);
    void addDriver(const Driver&);
    void addAdmin(const Admin&);
    virtual ~System();
};


#endif //PSS2HW5_SYSTEM_H
