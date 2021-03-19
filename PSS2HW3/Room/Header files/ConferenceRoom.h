#ifndef PSS2HW2_CONFERENCEROOM_H
#define PSS2HW2_CONFERENCEROOM_H


#include "../Room.h"

class ConferenceRoom: public Room{
public:
    ConferenceRoom() = default;
    ConferenceRoom(const Room& room) : Room(room) {
        setAccessLevel(BLUE);
    } // creates an object from the base class and copies the base class
};


#endif //PSS2HW2_CONFERENCEROOM_H
