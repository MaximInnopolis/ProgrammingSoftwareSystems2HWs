#include "Admin.h"

void Admin::blockPossibilityToTakeCar(Driver* driver) {
    cout << "There is no possibility to take cars from now" << endl;
    driver->setPossibilityToTakeCar(false);
}

const string &Admin::getName() const {
    return name;
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
