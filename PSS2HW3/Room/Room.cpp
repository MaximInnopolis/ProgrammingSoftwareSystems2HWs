#include "Room.h"

void Room::setAccessLevel(AccessLevel accesslevel) {
    access_level = accesslevel;
}

void Room::setFloor() {
    floor = getNumber() / 100;
}