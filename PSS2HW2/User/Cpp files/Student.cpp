#include "../Header files/Student.h"
#include "../../Room/Header files/LectureRoom.h"
#include "../../Room/Header files/DirectorCabinet.h"
#include "../../Room/Header files/ConferenceRoom.h"
#include "../../Room/Header files/ClassRoom.h"
#include "../../Room/Header files/Cabinet.h"


void Student::tryOpenRoom(Room* R) {

    string allow1 = "Access is allowed. Student ";
    string allow2 = " can enter room ";
    string den1 = "Access is denied. Student ";
    string den2 = " can not enter room of this access level.\n";


    if (access_level >= R->access_level){
        cout << allow1 << getName() << allow2 << R->getNumber() << ".\n" << endl;
    } else {
        cout << den1 << getName() << den2 << R->getNumber() << ".\n" << endl;
    }
}

void Student::spamInChat() {
    cout << "Using telegram app student " << getName() << " spams funny stickers.\n" << endl;
}
