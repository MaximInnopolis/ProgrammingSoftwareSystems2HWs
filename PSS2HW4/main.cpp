#include <iostream>
#include "System.h"

int main() {
    System system1;
    cout << system1.name <<'\n' << endl;

    system1.passengerLogIn({"Maxim"});
    system1.driverLogIn({"Leonid"});

    return 0;
}
