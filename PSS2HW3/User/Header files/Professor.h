#ifndef PSS2HW2_PROFESSOR_H
#define PSS2HW2_PROFESSOR_H


#include "../User.h"

class Professor: public User{
public:
    Professor() = default;
    Professor(const User& user) : User(user) {
        setAccessLevel(YELLOW);
    } // creates an object from the base class and copies the base class
    void tellJoke();
    string Institute;
};


#endif //PSS2HW2_PROFESSOR_H
