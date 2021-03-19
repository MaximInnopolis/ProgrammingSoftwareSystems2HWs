#ifndef PSS2HW2_CLASSROOM_H
#define PSS2HW2_CLASSROOM_H


#include "../Room.h"

class ClassRoom: public Room{
public:
    ClassRoom() = default;
    ClassRoom(const Room& room) : Room(room) {
        setAccessLevel(GREEN);
    } // creates an object from the base class and copies the base class
};


#endif //PSS2HW2_CLASSROOM_H
