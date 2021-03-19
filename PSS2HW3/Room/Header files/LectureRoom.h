#ifndef PSS2HW2_LECTUREROOM_H
#define PSS2HW2_LECTUREROOM_H


#include "../Room.h"

class LectureRoom: public Room{
public:
    LectureRoom() = default;
    LectureRoom(const Room& room) : Room(room) {} // создает объект из базового класса и копирует базовый класс
};


#endif //PSS2HW2_LECTUREROOM_H