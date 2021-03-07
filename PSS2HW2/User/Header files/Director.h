#ifndef PSS2HW2_DIRECTOR_H
#define PSS2HW2_DIRECTOR_H


#include "../User.h"

class Director: public User{
public:
    Director() = default;
    Director(const User& user) : User(user) {} // создает объект из базового класса и копирует базовый класс
    AccessLevel access_level = RED;
    void tryOpenRoom(Room* R) override;
    void sayFunnySentence();
};


#endif //PSS2HW2_DIRECTOR_H
