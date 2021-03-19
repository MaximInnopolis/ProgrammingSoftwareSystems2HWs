#include "University.h"
#include "User/Header files/Admin.h"
#include "Room/Header files/ClassRoom.h"
#include "Room/Header files/LectureRoom.h"
#include "Room/Header files/ConferenceRoom.h"
#include "Room/Header files/Cabinet.h"
#include "Room/Header files/DirectorCabinet.h"
#include "User/Header files/Professor.h"
#include "User/Header files/Guest.h"
#include "User/Header files/Director.h"
#include "User/Header files/LabEmployee.h"
#include "User/Header files/Student.h"

int     main() {
    University Innopolis;
    cout << "Address of University is: " << Innopolis.address << '\n' << endl;

    Innopolis.addClassRoom({123});
    Innopolis.addLectureRoom({108});
    Innopolis.addConferenceRoom({306});
    Innopolis.addCabinet({403});
    Innopolis.addDirectorCabinet({401});


    Room* room1 = Innopolis.getRoom(123);
    room1->setAccessLevel(GREEN);

    Room* room2 = Innopolis.getRoom(108);
    room2->setAccessLevel(YELLOW);

    Room* room3 = Innopolis.getRoom(306);
    room3->setAccessLevel(GREEN);

    Room* room4 = Innopolis.getRoom(403);
    room4->setAccessLevel(YELLOW);

    Room* room5 = Innopolis.getRoom(401);
    room5->setAccessLevel(RED);


    Innopolis.addStudent({"Maxim"});
    Innopolis.addStudent({"Nikita"});
    Innopolis.addStudent({"Lolik"});
    Innopolis.addStudent({"Vlad"});
    Innopolis.addStudent({"Petya"});
    Innopolis.addStudent({"Duck"});
    Innopolis.addStudent({"Tormund"});
    Innopolis.addStudent({"Frodo"});
    Innopolis.addStudent({"Saurfang"});
    Innopolis.addStudent({"Variann"});
    Innopolis.addStudent({"Tom"});
    Innopolis.addStudent({"Emily"});
    Innopolis.addStudent({"Rock"});
    Innopolis.addStudent({"Huston"});
    Innopolis.addStudent({"Valira"});
    Innopolis.addStudent({"Bobby"});

    Innopolis.addLabEmployee({"Oleg"});
    Innopolis.addLabEmployee({"Nastya"});
    Innopolis.addLabEmployee({"Andrey"});
    Innopolis.addLabEmployee({"Roman"});
    Innopolis.addLabEmployee({"Ahmad"});
    Innopolis.addLabEmployee({"Alexandr"});
    Innopolis.addLabEmployee({"Olga"});
    Innopolis.addLabEmployee({"Yaroslava"});

    Innopolis.addProfessor({"Adil"});
    Innopolis.addProfessor({"Giancarlo"});
    Innopolis.addProfessor({"Manuel"});
    Innopolis.addProfessor({"Vladimir"});

    Innopolis.addAdmin({"Kosha"});
    Innopolis.addAdmin({"Kesha"});

    Innopolis.addDirector({"Tormasov"});

    Innopolis.addGuest({"Sanya"});

    Innopolis.getUser("Variann")->tryOpenRoom(Innopolis.getRoom(401));
    Innopolis.getUser("Tormasov")->tryOpenRoom(Innopolis.getRoom(306));

    User* admin1 = Innopolis.getUser("Kosha");
    Admin* pa = dynamic_cast<Admin*>(admin1);
    pa->blockRoom(Innopolis.getRoom(403));
    pa->changeAccess(BLUE,Innopolis.getUser("Roman"));

    Innopolis.getUser("Roman")->tryOpenRoom(Innopolis.getRoom(306));

    Innopolis.getUser("Oleg")->tryOpenRoom(Innopolis.getRoom(403));

    User* student1 = Innopolis.getUser("Bobby");
    Student* ps = dynamic_cast<Student*>(student1);
    ps->spamInChat();

    User* professor1 = Innopolis.getUser("Adil");
    Professor* pp = dynamic_cast<Professor*>(professor1);
    pp->tellJoke();

    User* guest1 = Innopolis.getUser("Sanya");
    Guest* pg = dynamic_cast<Guest*>(guest1);
    pg->cryInChat();

    User* labemployee1 = Innopolis.getUser("Oleg");
    LabEmployee* ple = dynamic_cast<LabEmployee*>(labemployee1);
    ple->requestEnterRoom(Innopolis.getRoom(403));

    User* director = Innopolis.getUser("Tormasov");
    Director* pd = dynamic_cast<Director*>(director);
    pd->sayFunnySentence();
}