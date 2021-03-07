#ifndef PSS2HW2_ADMIN_H
#define PSS2HW2_ADMIN_H


#include "../User.h"

class Admin: public User{
public:
    Admin() = default;
    Admin(const User& user) : User(user) {} // создает объект из базового класса и копирует базовый класс
    AccessLevel access_level = NO_LEVEL;
    void tryOpenRoom(Room* R) override;
    void blockRoom(Room* R);
};


#endif //PSS2HW2_ADMIN_H
