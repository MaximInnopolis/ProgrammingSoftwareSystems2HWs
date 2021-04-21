#ifndef PSS2HW5_ADMINGATEWAY_H
#define PSS2HW5_ADMINGATEWAY_H


#include "../System.h"

class AdminGateWay {
private:
    System *system;
public:
    explicit AdminGateWay(System* system);

    void adminLogIn(const Admin& admin);
    Admin* getAdmin(const string &name);
};


#endif //PSS2HW5_ADMINGATEWAY_H
