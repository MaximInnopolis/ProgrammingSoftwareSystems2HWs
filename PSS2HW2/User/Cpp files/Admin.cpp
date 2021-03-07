#include "../Header files/Admin.h"

void Admin::tryOpenRoom(Room *R) {
    cout << "Access for admin is allowed anywhere in university. Door opened. Admin " << getName() << " can enter room " << R->getNumber() << " .\n" << endl;
}

void Admin::blockRoom(Room *R) {
    R->setAccessLevel(NO_LEVEL);
    cout << "Now room " << R->getNumber() << " is closed for everyone except admins.\n" << endl;
}