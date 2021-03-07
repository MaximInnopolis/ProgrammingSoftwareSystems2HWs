#include "../Header files/Director.h"
#include "../../Room/Header files/LectureRoom.h"
#include "../../Room/Header files/DirectorCabinet.h"
#include "../../Room/Header files/ConferenceRoom.h"
#include "../../Room/Header files/ClassRoom.h"
#include "../../Room/Header files/Cabinet.h"
#include <ctime>
#include <map>


void Director::tryOpenRoom(Room* R) {

    string allow1 = "Access is allowed. Director ";
    string allow2 = " can enter room ";
    string den1 = "Access is denied. Director ";
    string den2 = " can not enter room of this access level.\n";


    if (LectureRoom *lr = dynamic_cast<LectureRoom*>(R)){
        if (access_level >= lr->access_level){
            cout << allow1 << getName() << allow2 << lr->getNumber() << ".\n" << endl;
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

void Director::sayFunnySentence(){
    srand(time(NULL));
    map <int, string> word;
    int wordSize = 4;

    word[0] = "typically";
    word[1] = "mathematically";
    word[2] = "physically";
    word[3] = "technically";

    cout << "I " << word.find(rand() % wordSize)->second << " don't eat fruit, but "  << word.find(rand() % wordSize)->second << " speaking, this is inexplicable.\n" << endl ;
}