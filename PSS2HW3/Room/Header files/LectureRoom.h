#ifndef PSS2HW2_LECTUREROOM_H
#define PSS2HW2_LECTUREROOM_H


#include "../Room.h"

class LectureRoom: public Room{
public:
    LectureRoom() = default;
    LectureRoom(const Room& room) : Room(room) {
        setAccessLevel(BLUE);
        setFloor();
    } // creates an object from the base class and copies the base class
};


#endif //PSS2HW2_LECTUREROOM_H