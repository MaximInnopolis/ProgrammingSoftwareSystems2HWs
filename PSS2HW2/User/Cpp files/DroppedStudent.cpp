#include "../Header files/DroppedStudent.h"

void DroppedStudent::tryOpenRoom(Room *R) {
    cout << "Access is denied. Dropped students can not enter any room.\n" << endl;
}

void DroppedStudent::spamInChat() {
    cout << "Using telegram app dropped student " << getName() << " spams about how bad it is to live dropped.\n" << endl;
}