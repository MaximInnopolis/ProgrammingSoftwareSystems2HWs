#include "../Header files/LabEmployee.h"
#include "../../Room/Header files/LectureRoom.h"
#include "../../Room/Header files/DirectorCabinet.h"
#include "../../Room/Header files/ConferenceRoom.h"
#include "../../Room/Header files/ClassRoom.h"
#include "../../Room/Header files/Cabinet.h"


void LabEmployee::tryOpenRoom(Room *R) {

    string allow1 = "Access is allowed. Lab employee ";
    string allow2 = " can enter the room.\n";
    string den1 = "Access is denied. Lab employee ";
    string den2 = " can request admins enter this room.\n";


    if (LectureRoom *lr = dynamic_cast<LectureRoom*>(R)){
        if (access_level >= lr->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (DirectorCabinet *dc = dynamic_cast<DirectorCabinet*>(R)){
        if (access_level >= dc->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (ConferenceRoom *cor = dynamic_cast<ConferenceRoom*>(R)){
        if (access_level >= cor->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (ClassRoom *clr = dynamic_cast<ClassRoom*>(R)){
        if (access_level >= clr->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (Cabinet *c = dynamic_cast<Cabinet*>(R)){
        if (access_level >= c->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
}

void LabEmployee::requestEnterRoom(Room* R) {

    string allow1 = "The request was reviewed. Access is allowed. There is no need to request admins enter room of this access level. Lab employee ";
    string allow2 = " can enter the room.\n";
    string den1 = "The request was reviewed. Access is denied. Admins can not give permission to enter director cabinet. Lab employee ";
    string den2 = " can not enter director cabinet.\n";
    string allow3 = "The request was reviewed. Access is allowed. Lab employee ";
    string allow4 = " can enter the room.\n";
    string den3 = "The request was reviewed. Access is denied. This room is blocked therefore lab employee ";
    string den4 = " can not enter blocked room.\n";

    if (LectureRoom *lr = dynamic_cast<LectureRoom*>(R)){
        if (access_level >= lr->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else if ((access_level < lr->access_level) && (lr->access_level != NO_LEVEL)){
            cout << allow3 << getName() << allow4 << endl;
        } else if (lr->access_level = NO_LEVEL){
            cout << den3 << getName() << den4 <<endl;
        }
    }
    if (DirectorCabinet *dc = dynamic_cast<DirectorCabinet*>(R)){
        if (access_level >= dc->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else{
            cout << den1 << getName() << den2 << endl;
        }
    }
    if (ConferenceRoom *cor = dynamic_cast<ConferenceRoom*>(R)){
        if (access_level >= cor->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else if (cor->access_level = NO_LEVEL){
            cout << den3 << getName() << den4 <<endl;
        } else{
            cout << allow3 << getName() << allow4 << endl;
        }
    }
    if (ClassRoom *clr = dynamic_cast<ClassRoom*>(R)){
        if (access_level >= clr->access_level){
            cout << allow1 << getName() << allow2 << endl;
        } else if (clr->access_level = NO_LEVEL){
            cout << den3 << getName() << den4 <<endl;
        } else{
            cout << allow3 << getName() << allow4 << endl;
        }
    }
    if (Cabinet *c = dynamic_cast<Cabinet*>(R)){
        if (access_level >= c->access_level){
            cout << allow1 << getName() << allow2 << endl;
        }else if ((access_level < c->access_level) && (c->access_level != NO_LEVEL)){
            cout << allow3 << getName() << allow4 << endl;
        } else if (c->access_level = NO_LEVEL){
            cout << den3 << getName() << den4 <<endl;
        }
    }
}
