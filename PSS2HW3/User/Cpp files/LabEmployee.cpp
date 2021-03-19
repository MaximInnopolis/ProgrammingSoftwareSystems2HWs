#include "../Header files/LabEmployee.h"
#include "../../Room/Header files/LectureRoom.h"
#include "../../Room/Header files/DirectorCabinet.h"
#include "../../Room/Header files/ConferenceRoom.h"
#include "../../Room/Header files/ClassRoom.h"
#include "../../Room/Header files/Cabinet.h"


void LabEmployee::requestEnterRoom(Room* R) {

    string allow1 = "'s was reviewed. Access is allowed. There is no need to request admins enter room of this access level. ";
    string allow2 = " can enter room ";
    string den1 = "'s request was reviewed. Access is denied. Admins can not give permission to enter director cabinet. ";
    string den2 = " can not enter director cabinet.\n";
    string allow3 = "'s request was reviewed. Access is allowed. ";
    string allow4 = " can enter room ";
    string den3 = "'s request was reviewed. Access is denied. This room is blocked therefore ";
    string den4 = " can not enter blocked room ";

    if (LectureRoom *lr = dynamic_cast<LectureRoom*>(R)){
        if (access_level >= lr->access_level){
            cout << getName() << allow1 << getName() << allow2 << lr->getNumber() << ".\n" << endl;
        } else if ((access_level < lr->access_level) && (lr->access_level != NO_LEVEL)){
            cout << getName() << allow3 << getName() << allow4 << lr->getNumber() << ".\n" << endl;
        } else if (lr->access_level = NO_LEVEL){
            cout << getName() << den3 << getName() << den4 << lr->getNumber() << ".\n" << endl;
        }
    }
    if (DirectorCabinet *dc = dynamic_cast<DirectorCabinet*>(R)){
        if (access_level >= dc->access_level){
            cout << getName() << allow1 << getName() << allow2 << dc->getNumber() << ".\n" << endl;
        } else{
            cout << getName() << den1 << getName() << den2 << endl;
        }
    }
    if (ConferenceRoom *cor = dynamic_cast<ConferenceRoom*>(R)){
        if (access_level >= cor->access_level){
            cout << getName() << allow1 << getName() << allow2 << cor->getNumber() << ".\n" << endl;
        } else if (cor->access_level = NO_LEVEL){
            cout << getName() << den3 << getName() << den4 << cor->getNumber() << ".\n" << endl;
        } else{
            cout << getName() << allow3 << getName() << allow4 << cor->getNumber() << ".\n" << endl;
        }
    }
    if (ClassRoom *clr = dynamic_cast<ClassRoom*>(R)){
        if (access_level >= clr->access_level){
            cout << getName() << allow1 << getName() << allow2 << clr->getNumber() << ".\n" << endl;
        } else if (clr->access_level = NO_LEVEL){
            cout << getName() << den3 << getName() << den4 << clr->getNumber() << ".\n" << endl;
        } else{
            cout << getName() << allow3 << getName() << allow4 << clr->getNumber() << ".\n" << endl;
        }
    }
    if (Cabinet *c = dynamic_cast<Cabinet*>(R)){
        if (access_level >= c->access_level){
            cout << getName() << allow1 << getName() << allow2 << c->getNumber() << ".\n" << endl;
        }else if ((access_level < c->access_level) && (c->access_level != NO_LEVEL)){
            cout << getName() << allow3 << getName() << allow4 << c->getNumber() << ".\n" << endl;
        } else if (c->access_level = NO_LEVEL){
            cout << getName() << den3 << getName() << den4 << c->getNumber() << ".\n" << endl;
        }
    }
}
