#ifndef PSS2HW2_DROPPEDSTUDENT_H
#define PSS2HW2_DROPPEDSTUDENT_H


#include "../User.h"

class Guest: public User{
public:
    Guest() = default;
    Guest(const User& user) : User(user) {
        setAccessLevel(BLUE);
    } // creates an object from the base class and copies the base class
    int group;
    string address;
};


#endif //PSS2HW2_DROPPEDSTUDENT_H
