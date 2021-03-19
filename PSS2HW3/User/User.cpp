#include "User.h"
#include "../Room/Header files/LectureRoom.h"
#include "../Room/Header files/DirectorCabinet.h"
#include "../Room/Header files/ClassRoom.h"
#include "../Room/Header files/Cabinet.h"
#include "../Room/Header files/ConferenceRoom.h"

void User::setAccessLevel(AccessLevel accesslevel) {
    access_level = accesslevel;
}

void User::tryOpenRoom(Room *R) {
    string allow1 = "Access is allowed. User ";
    string allow2 = " can enter room ";
    string den1 = "Access is denied. User ";
    string den2 = " can not enter room of this access level.\n";


    if (LectureRoom *lr = dynamic_cast<LectureRoom*>(R)){
        if (access_level >= lr->access_level){
            cout << allow1 << getName() << allow2 << R->getNumber() << ".\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (DirectorCabinet *dc = dynamic_cast<DirectorCabinet*>(R)){
        if (access_level >= dc->access_level){
            cout << allow1 << getName() << allow2 << dc->getNumber() << ".\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (ConferenceRoom *cor = dynamic_cast<ConferenceRoom*>(R)){
        if (access_level >= cor->access_level){
            cout << allow1 << getName() << allow2 << cor->getNumber() << ".\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (ClassRoom *clr = dynamic_cast<ClassRoom*>(R)){
        if (access_level >= clr->access_level){
            cout << allow1 << getName() << allow2 << clr->getNumber() << ".\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (Cabinet *c = dynamic_cast<Cabinet*>(R)){
        if (access_level >= c->access_level){
            cout << allow1 << getName() << allow2 << c->getNumber() << ".\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
}