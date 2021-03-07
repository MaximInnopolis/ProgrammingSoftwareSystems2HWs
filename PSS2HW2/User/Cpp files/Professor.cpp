#include "../Header files/Professor.h"


void Professor::tryOpenRoom(Room *R) {

    string allow1 = "Access is allowed. Professor ";
    string allow2 = " can enter room ";
    string den1 = "Access is denied. Professor ";
    string den2 = " can not enter room of this access level.\n";


    if (access_level >= R->access_level){
        cout << allow1 << getName() << allow2 << R->getNumber() << ".\n" << endl;
    } else {
        cout << den1 << getName() << den2 << R->getNumber() << ".\n" << endl;
    }
}

void Professor::tellJoke() {
    cout << "Professor " << getName() << " complains to the dean:\n- I insist on strict punishment of student Ivanov.\n Not only did I find him at the bar, but he also informed my wife about it! \n" << endl;
}