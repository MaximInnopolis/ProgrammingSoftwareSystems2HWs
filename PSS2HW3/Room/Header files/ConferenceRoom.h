#ifndef PSS2HW2_CONFERENCEROOM_H
#define PSS2HW2_CONFERENCEROOM_H


#include "../Room.h"

class ConferenceRoom: public Room{
public:
    ConferenceRoom() = default;
    ConferenceRoom(const Room& room) : Room(room) {} // создает объект из базового класса и копирует базовый класс
};


#endif //PSS2HW2_CONFERENCEROOM_H
