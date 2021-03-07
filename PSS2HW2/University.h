#ifndef PSS2HW2_UNIVERSITY_H
#define PSS2HW2_UNIVERSITY_H

#include "Room/Room.h"
#include "User/User.h"
#include "User/Header files/Student.h"
#include "User/Header files/LabEmployee.h"
#include <vector>


class University{
public:
    string address = "Universitetskaya st., 1, Innopolis, Rep. Tatarstan";
    void addStudent(const User& student);
    void addProfessor(const User& professor);
    void addLabEmployee(const User& lab_employee);
    void addDroppedStudent(const User& dropped_student);
    void addDirector(const User& director);
    void addAdmin(const User& admin);


    void addLectureRoom(const Room& lecture_room);
    void addConferenceRoom(const Room& conference_room);
    void addClassRoom(const Room& class_room);
    void addCabinet(const Room& cabinet);
    void addDirectorCabinet(const Room& director_cabinet);

    ~University();
    User* getUser(string name);
    Room* getRoom(int room);
private:
    vector<User*> array_of_user;
    vector<Room*> array_of_room;
};


#endif //PSS2HW2_UNIVERSITY_H