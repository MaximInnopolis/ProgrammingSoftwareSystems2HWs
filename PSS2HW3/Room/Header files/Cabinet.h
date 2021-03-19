#ifndef PSS2HW2_CABINET_H
#define PSS2HW2_CABINET_H


#include "../Room.h"

class Cabinet: public Room{
public:
    Cabinet() = default;
    Cabinet(const Room& room) : Room(room) {
        setAccessLevel(YELLOW);
    } // creates an object from the base class and copies the base class
};


#endif //PSS2HW2_CABINET_H
