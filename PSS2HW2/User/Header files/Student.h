#ifndef PSS2HW2_STUDENT_H
#define PSS2HW2_STUDENT_H


#include "../User.h"


class Student: public User{
public:
    Student() = default;
    Student(const User& user) : User(user) {} // создает объект из базового класса и копирует базовый класс
    void spamInChat();
    void tryOpenRoom(Room* R) override;
    AccessLevel access_level = GREEN;
    int group;
};


#endif //PSS2HW2_STUDENT_H