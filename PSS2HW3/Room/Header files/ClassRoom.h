#ifndef PSS2HW2_CLASSROOM_H
#define PSS2HW2_CLASSROOM_H


#include "../Room.h"

class ClassRoom: public Room{
public:
    ClassRoom() = default;
    ClassRoom(const Room& room) : Room(room) {} // создает объект из базового класса и копирует базовый класс
};


#endif //PSS2HW2_CLASSROOM_H
