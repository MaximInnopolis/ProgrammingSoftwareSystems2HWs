#ifndef PSS2HW2_DIRECTORCABINET_H
#define PSS2HW2_DIRECTORCABINET_H


#include "../Room.h"

class DirectorCabinet: public Room{
public:
    DirectorCabinet() = default;
    DirectorCabinet(const Room& room) : Room(room) {
        setAccessLevel(RED);
        setFloor();
    } // creates an object from the base class and copies the base class
};
#endif //PSS2HW2_DIRECTORCABINET_H
