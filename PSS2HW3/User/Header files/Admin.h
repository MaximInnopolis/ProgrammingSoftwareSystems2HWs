#ifndef PSS2HW2_ADMIN_H
#define PSS2HW2_ADMIN_H


#include "../User.h"

class Admin: public User{
public:
    Admin() = default;
    Admin(const User& user) : User(user) {
        setAccessLevel(NO_LEVEL);
    }                                       // creates an object from the base class and copies the base class
    void blockRoom(Room* R);
    void changeAccess(AccessLevel aL, User* user);
};


#endif //PSS2HW2_ADMIN_H