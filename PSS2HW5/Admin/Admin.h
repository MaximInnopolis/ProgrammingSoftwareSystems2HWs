#ifndef PSS2HW5_ADMIN_H
#define PSS2HW5_ADMIN_H

#include <iostream>
#include <string>
#include "../Driver/Driver.h"
#include "../Passenger/Passenger.h"

using namespace std;

class Admin {
private:
    string name;
public:
    const string &getName() const;
    explicit  Admin(string name):name(name){}

    void validateCars(Driver* driver);

    //Block Drivers functions
    void blockPossibilityToTakeCar(Driver* driver);
    void blockPossibilityToSeeCar(Driver* driver);
    void blockPosibilityToSeeOrderHistory(Driver* driver);
    void blockPossibilityToUpdateStatus(Driver* driver);
    void PossibilityToCheckAvailableOrders(Driver* driver);
    void PossibilityToAcceptOrders(Driver* driver);

    //Block Passengers functions
    void blockPossibilityToSeePaymentMethods(Passenger* passenger);
    void blockPossibilityToAddPaymentMethod(Passenger* passenger);
    void blockPossibilityToDeletePaymentMethod(Passenger* passenger);
    void blockPossibilityToSeePinnedAddresses(Passenger* passenger);
    void blockPossibilityToAddPinnedAddresses(Passenger* passenger);
    void blockPossibilityToDeletePinnedAddresses(Passenger* passenger);
    void blockPossibilityToSeeOrderHistory(Passenger* passenger);
    void blockPossibilityToSelectAnything(Passenger* passenger);
    void blockPossibilityToCheckAnything(Passenger* passenger);
    void blockPossibilityToOrderRide(Passenger* passenger;
    void blockPossibilityToChoosePaymentMethod(Passenger* passenger);
};


#endif //PSS2HW5_ADMIN_H
