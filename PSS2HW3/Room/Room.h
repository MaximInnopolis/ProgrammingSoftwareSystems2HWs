#ifndef PSS2HW2_ROOM_H
#define PSS2HW2_ROOM_H


#include "../AccessLevel.h"
#include <string>
#include <iostream>

using namespace std;

class Room{
public:
    Room(int _number){number = _number;}
    int getNumber(){return number;}
    virtual ~Room() = default;
    void setAccessLevel(AccessLevel accesslevel);
    AccessLevel access_level;
private:
    int number;
    int number_of_seats;
};


#endif //PSS2HW2_ROOM_H
