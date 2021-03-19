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
    void tryOpenRoom(Room* R);;
    void setAccessLevel(AccessLevel accesslevel);
    AccessLevel access_level;
private:
    string name;
    string date_of_birth;
    int age;
    string placeOfResidence;
    double weight;
    double height;
};


#endif //PSS2HW2_USER_H