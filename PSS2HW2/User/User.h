#ifndef PSS2HW2_USER_H
#define PSS2HW2_USER_H

#include <string>
#include <iostream>
#include "../AccessLevel.h"
#include "../Room/Room.h"

using namespace std;

class User{
public:
    User(string _name){name = _name;}
    string getName(){return name;}
    virtual ~User() = default;
    virtual void tryOpenRoom(Room* R){};
private:
    string name;
    string date_of_birth;
    int age;
    AccessLevel access_level;
};


#endif //PSS2HW2_USER_H