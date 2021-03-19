#ifndef PSS2HW2_STUDENT_H
#define PSS2HW2_STUDENT_H


#include "../User.h"


class Student: public User{
public:
    Student() = default;
    Student(const User& user) : User(user) {
        setAccessLevel(GREEN);
    } // creates an object from the base class and copies the base class
    void spamInChat();
    int group;
};


#endif //PSS2HW2_STUDENT_H