#ifndef PSS2HW2_DIRECTORCABINET_H
#define PSS2HW2_DIRECTORCABINET_H


#include "../Room.h"

class DirectorCabinet: public Room{
public:
    DirectorCabinet() = default;
    DirectorCabinet(const Room& room) : Room(room) {} // создает объект из базового класса и копирует базовый класс
};
#endif //PSS2HW2_DIRECTORCABINET_H
