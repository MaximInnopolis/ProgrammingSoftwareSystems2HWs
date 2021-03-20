#include "University.h"
#include "User/Header files/Professor.h"
#include "User/Header files/Guest.h"
#include "User/Header files/Director.h"
#include "User/Header files/Admin.h"
#include "Room/Header files/LectureRoom.h"
#include "Room/Header files/ConferenceRoom.h"
#include "Room/Header files/ClassRoom.h"
#include "Room/Header files/Cabinet.h"
#include "Room/Header files/DirectorCabinet.h"
#include "User/Header files/Student.h"
#include "User/Header files/LabEmployee.h"

User *University::getUser(string name) {
    for(auto u: array_of_user)
        if( u->getName() == name)
            return u;
    return nullptr;
}

Room *University::getRoom(int room) {
    for(auto r: array_of_room)
        if( r->getNumber() == room)
            return r;
    return nullptr;
}

University::~University() {
    for (auto u: array_of_user){
        delete u;
    }
    array_of_user.clear();

    for (auto r: array_of_room){
        delete r;
    }
    array_of_room.clear();
}

void University::addStudent(const User& student) {
    array_of_user.push_back( new Student(student));
}

void University::addProfessor(const User& professor) {
    array_of_user.push_back( new Professor(professor));
}

void University::addLabEmployee(const User& lab_employee) {
    array_of_user.push_back( new LabEmployee(lab_employee));
}

void University::addGuest(const User& guest) {
    array_of_user.push_back( new Guest(guest));
}

void University::addDirector(const User& director) {
    array_of_user.push_back( new Director(director));
}

void University::addAdmin(const User& admin) {
    array_of_user.push_back( new Admin(admin));
}

void University::addLectureRoom(const Room& lecture_room) {
    array_of_room.push_back( new LectureRoom(lecture_room));
}

void University::addConferenceRoom(const Room& conference_room) {
    array_of_room.push_back( new ConferenceRoom(conference_room));
}

void University::addClassRoom(const Room& class_room) {
    array_of_room.push_back( new ClassRoom(class_room));
}

void University::addCabinet(const Room& cabinet) {
    array_of_room.push_back( new Cabinet(cabinet));
}

void University::addDirectorCabinet(const Room& director_cabinet) {
    array_of_room.push_back( new DirectorCabinet(director_cabinet));
}

void University::enableEmergency(){

    for (auto r : array_of_room){
        r->setAccessLevel(GREEN);
    }

    for (auto u : array_of_user){
        if (u->access_level == BLUE){
            u->setAccessLevel(GREEN);
        }
    }

    cout << "Attention, emergency situation. Leave the building immediately, using emergency exits." << endl;
}

void University::cancelEmergency() {

    for (auto R : array_of_room) {
        if (LectureRoom *lr = dynamic_cast<LectureRoom *>(R)) {
            lr->setAccessLevel(BLUE);
        }
        if (DirectorCabinet *dc = dynamic_cast<DirectorCabinet *>(R)) {
            dc->setAccessLevel(RED);
        }
        if (ConferenceRoom *cor = dynamic_cast<ConferenceRoom *>(R)) {
            cor->setAccessLevel(BLUE);
        }
        if (ClassRoom *clr = dynamic_cast<ClassRoom *>(R)) {
            clr->setAccessLevel(GREEN);
        }
        if (Cabinet *c = dynamic_cast<Cabinet *>(R)) {
            c->setAccessLevel(YELLOW);
        }
    }

    for (auto u : array_of_user){
        if (u->access_level == GREEN){
            if (Guest *g = dynamic_cast<Guest*>(u)){
                g->setAccessLevel(BLUE);
            }
        }
    }
    cout << "No more emergency situation. All University members can return to their duties." << endl;
}