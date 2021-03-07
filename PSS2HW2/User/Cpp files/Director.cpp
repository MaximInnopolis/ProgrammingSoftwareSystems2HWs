#include "../Header files/Director.h"
#include <ctime>
#include <map>


void Director::tryOpenRoom(Room* R) {

    string allow1 = "Access is allowed. Director ";
    string allow2 = " can enter room ";
    string den1 = "Access is denied. Director ";
    string den2 = " can not enter room of this access level.\n";


    if (access_level >= R->access_level){
        cout << allow1 << getName() << allow2 << R->getNumber() << ".\n" << endl;
    } else {
        cout << den1 << getName() << den2 << R->getNumber() << ".\n" << endl;
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