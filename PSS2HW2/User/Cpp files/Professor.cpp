#include "../Header files/Professor.h"
#include "../../Room/Header files/LectureRoom.h"
#include "../../Room/Header files/DirectorCabinet.h"
#include "../../Room/Header files/ConferenceRoom.h"
#include "../../Room/Header files/ClassRoom.h"
#include "../../Room/Header files/Cabinet.h"


void Professor::tryOpenRoom(Room *R) {

    string allow1 = "Access is allowed. Professor ";
    string allow2 = " can enter room ";
    string den1 = "Access is denied. Professor ";
    string den2 = " can not enter room of this access level.\n";


    if (LectureRoom *lr = dynamic_cast<LectureRoom*>(R)){
        if (access_level >= lr->access_level){
            cout << allow1 << getName() << allow2 << lr->getNumber() << " .\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (DirectorCabinet *dc = dynamic_cast<DirectorCabinet*>(R)){
        if (access_level >= dc->access_level){
            cout << allow1 << getName() << allow2 << dc->getNumber() << " .\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (ConferenceRoom *cor = dynamic_cast<ConferenceRoom*>(R)){
        if (access_level >= cor->access_level){
            cout << allow1 << getName() << allow2 << cor->getNumber() << " .\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (ClassRoom *clr = dynamic_cast<ClassRoom*>(R)){
        if (access_level >= clr->access_level){
            cout << allow1 << getName() << allow2 << clr->getNumber() << " .\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (Cabinet *c = dynamic_cast<Cabinet*>(R)){
        if (access_level >= c->access_level){
            cout << allow1 << getName() << allow2 << c->getNumber() << " .\n" << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
}

void Professor::tellJoke() {
    cout << "Professor " << getName() << " complains to the dean:\n- I insist on strict punishment of student Ivanov.\n Not only did I find him at the bar, but he also informed my wife about it! \n" << endl;
}