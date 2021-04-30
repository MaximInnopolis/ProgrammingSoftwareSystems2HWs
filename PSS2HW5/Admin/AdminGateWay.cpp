#include "AdminGateWay.h"

void AdminGateWay::adminLogIn(const Admin &admin) {
    system->addAdmin(admin);
}

Admin *AdminGateWay::getAdmin(const string &name) {
    for (const auto &d: system->getListOfAdmins())
        if(d->getName() == name)
            return d;
    return nullptr;
}

AdminGateWay::AdminGateWay(System *system) : system(system) {}