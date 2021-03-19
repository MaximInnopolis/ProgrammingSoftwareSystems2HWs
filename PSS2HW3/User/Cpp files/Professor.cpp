#include "../Header files/Professor.h"
#include "../../Room/Header files/LectureRoom.h"
#include "../../Room/Header files/DirectorCabinet.h"
#include "../../Room/Header files/ConferenceRoom.h"
#include "../../Room/Header files/ClassRoom.h"
#include "../../Room/Header files/Cabinet.h"

void Professor::tellJoke() {
    cout << "Professor " << getName() << " complains to the dean:\n- I insist on strict punishment of student Ivanov.\n Not only did I find him at the bar, but he also informed my wife about it! \n" << endl;
}