#ifndef PSS2HW2_CABINET_H
#define PSS2HW2_CABINET_H


#include "../Room.h"

class Cabinet: public Room{
public:
    Cabinet() = default;
    Cabinet(const Room& room) : Room(room) {} // создает объект из базового класса и копирует базовый класс
};


#endif //PSS2HW2_CABINET_H
