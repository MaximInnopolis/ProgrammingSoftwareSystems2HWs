#ifndef PSS2HW2_LABEMPLOYEE_H
#define PSS2HW2_LABEMPLOYEE_H


#include "../User.h"

class LabEmployee: public User{
public:
    LabEmployee() = default;
    LabEmployee(const User& user) : User(user) {
        setAccessLevel(GREEN);
    } // creates an object from the base class and copies the base class
    void requestEnterRoom(Room* R);
    string Lab;
};


#endif //PSS2HW2_LABEMPLOYEE_H
