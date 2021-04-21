#ifndef PSS2HW5_ADMIN_H
#define PSS2HW5_ADMIN_H

#include <iostream>
#include <string>
#include "../Driver/Driver.h"

using namespace std;

class Admin {
private:
    string name;
public:
    const string &getName() const;
    explicit  Admin(string name):name(name){}
    void blockPossibilityToTakeCar(Driver* driver);
    void blockPossibilityToSeeCar(Driver* driver);
    void blockPosibilityToSeeOrderHistory(Driver* driver);
    void blockPossibilityToUpdateStatus(Driver* driver);
    void PossibilityToCheckAvailableOrders(Driver* driver);
    void PossibilityToAcceptOrders(Driver* driver);
};


#endif //PSS2HW5_ADMIN_H
