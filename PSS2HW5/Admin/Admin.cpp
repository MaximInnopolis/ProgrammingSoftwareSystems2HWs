#include "Admin.h"

const string &Admin::getName() const {
    return name;
}

void Admin::validateCars(Driver *driver) {
    for (auto c : driver->getListOfCars()){
        c.valid = true;
    }
}

void Admin::blockPossibilityToTakeCar(Driver* driver) {
    cout << "There is no possibility to take cars from now" << endl;
    driver->setPossibilityToTakeCar(false);
}

void Admin::blockPossibilityToSeeCar(Driver* driver) {
    cout << "There is no possibility to see cars from now" << endl;
    driver->setPossibilityToSeeCar(false);
}

void Admin::blockPosibilityToSeeOrderHistory(Driver *driver) {
    cout << "There is no possibility to see order history from now" << endl;
    driver->setPossibilityToSeeOrderHistory(false);
}

void Admin::blockPossibilityToUpdateStatus(Driver *driver) {
    cout << "There is no possibility to update status from now" << endl;
    driver->setPossibilityToUpdateStatus(false);
}

void Admin::PossibilityToCheckAvailableOrders(Driver *driver) {
    cout << "There is no possibility to check available orders from now" << endl;
    driver->setPossibilityToCheckAvailableOrders(false);
}

void Admin::PossibilityToAcceptOrders(Driver *driver) {
    cout << "There is no possibility to accept orders from now" << endl;
    driver->setPossibilityToAcceptOrders(false);
}

void Admin::blockPossibilityToAddPaymentMethod(Passenger *passenger) {
    cout << "There is no possibility to add payment method from now" << endl;
    passenger->setPossibilityToAddPaymentMethod(false);
}

void Admin::blockPossibilityToSeePaymentMethods(Passenger *passenger) {
    cout << "There is no possibility to see payment methods from now" << endl;
    passenger->setPossibilityToSeePaymentMethods(false);
}

void Admin::blockPossibilityToDeletePaymentMethod(Passenger *passenger) {
    cout << "There is no possibility to delete payment method from now" << endl;
    passenger->setPossibilityToDeletePaymentMethod(false);
}

void Admin::blockPossibilityToSeePinnedAddresses(Passenger *passenger) {
    cout << "There is no possibility to see pinned addresses from now" << endl;
    passenger->setPossibilityToSeePinnedAddresses(false);
}

void Admin::blockPossibilityToAddPinnedAddresses(Passenger *passenger) {
    cout << "There is no possibility to add pinned addresses from now" << endl;
    passenger->setPossibilityToAddPinnedAddresses(false);
}

void Admin::blockPossibilityToDeletePinnedAddresses(Passenger *passenger) {
    cout << "There is no possibility to delete pinned addresses from now" << endl;
    passenger->setPossibilityToDeletePinnedAddresses(false);
}

void Admin::blockPossibilityToSeeOrderHistory(Passenger *passenger) {
    cout << "There is no possibility to see order history from now" << endl;
    passenger->setPossibilityToSeeOrderHistory(false);
}

void Admin::blockPossibilityToSelectAnything(Passenger *passenger) {
    cout << "There is no possibility to select anything from now" << endl;
    passenger->setPossibilityToSelectAnything(false);
}

void Admin::blockPossibilityToCheckAnything(Passenger *passenger) {
    cout << "There is no possibility to check anything from now" << endl;
    passenger->setPossibilityToCheckAnything(false);
}

void Admin::blockPossibilityToOrderRide(Passenger *passenger) {
    cout << "There is no possibility to order ride from now" << endl;
    passenger->setPossibilityToOrderRide(false);
}

void Admin::blockPossibilityToChoosePaymentMethod(Passenger *passenger) {
    cout << "There is no possibility to choose payment method from now" << endl;
    passenger->setPossibilityToChoosePaymentMethod(false);
}