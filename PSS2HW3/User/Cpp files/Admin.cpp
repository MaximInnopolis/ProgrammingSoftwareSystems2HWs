#include "../Header files/Admin.h"
#include "../Header files/Director.h"
#include "../Header files/Guest.h"
#include "../Header files/LabEmployee.h"
#include "../Header files/Professor.h"
#include "../Header files/Student.h"

void Admin::blockRoom(Room *R) {
    R->setAccessLevel(NO_LEVEL);
    cout << "Now room " << R->getNumber() << " is closed for everyone except admins.\n" << endl;
}

void Admin::changeAccess(AccessLevel aL, User *user) {
    string Al[]{"BLUE", "GREEN", "YELLOW ", "RED", "MAXIMUM LEVEL"};

    if (Director *pd = dynamic_cast<Director*>(user) ){
        user->setAccessLevel(aL);
    }
    if (Guest *pds = dynamic_cast<Guest*>(user) ){
        user->setAccessLevel(aL);
    }
    if (LabEmployee *pl = dynamic_cast<LabEmployee*>(user) ){
        user->setAccessLevel(aL);
    }
    if (Professor *pp = dynamic_cast<Professor*>(user) ){
        user->setAccessLevel(aL);
    }
    if (Student *ps = dynamic_cast<Student*>(user) ){
        user->setAccessLevel(aL);
    }
    cout << "Now access level of user " << user->getName() << " is " << Al[aL] << '.' << endl;
}
