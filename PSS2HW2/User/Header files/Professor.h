#ifndef PSS2HW2_PROFESSOR_H
#define PSS2HW2_PROFESSOR_H


#include "../User.h"

class Professor: public User{
public:
    Professor() = default;
    Professor(const User& user) : User(user) {} // создает объект из базового класса и копирует базовый класс
    void tellJoke();
    void tryOpenRoom(Room* R) override;
    AccessLevel access_level = YELLOW;
};


#endif //PSS2HW2_PROFESSOR_H
