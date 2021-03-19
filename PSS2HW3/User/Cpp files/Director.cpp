#include "../Header files/Director.h"
#include "../../Room/Header files/LectureRoom.h"
#include "../../Room/Header files/DirectorCabinet.h"
#include "../../Room/Header files/ConferenceRoom.h"
#include "../../Room/Header files/ClassRoom.h"
#include "../../Room/Header files/Cabinet.h"
#include <ctime>
#include <map>

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