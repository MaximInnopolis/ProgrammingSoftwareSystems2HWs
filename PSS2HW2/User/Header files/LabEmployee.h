#ifndef PSS2HW2_LABEMPLOYEE_H
#define PSS2HW2_LABEMPLOYEE_H


#include "../User.h"

class LabEmployee: public User{
public:
    LabEmployee() = default;
    LabEmployee(const User& user) : User(user) {} // создает объект из базового класса и копирует базовый класс
    void tryOpenRoom(Room* R) override;
    AccessLevel access_level = GREEN;
    void requestEnterRoom(Room* R);
};


#endif //PSS2HW2_LABEMPLOYEE_H
