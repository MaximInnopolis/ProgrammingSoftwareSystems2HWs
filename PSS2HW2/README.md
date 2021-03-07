# Programming-Software-Systems-2-Introduction-to-Programming-2-

There is a system which members can communicate to each other. In the main function there is a possibility to see its usage.

## System description

                     Abstract class User <______                                     Abstract class Room  <______
            _________^  ^  ^  ^  ^___________   \___Student                  _______^  ^   ^         ^______     \----------ClassRoom
      _____/     ______/   |  |____________  \__________                    |          |   |____________    \______________            
     |          /          |               \            \                   |           \               \_                 \Cabinet
    Admin    Director   DroppedStudent   LabEmployee    Professor        LectureRoom   DirectorCabinet    ConferenceRoom

Class University is needed to store pointers to objects of derived classes in vector. There are 2 vectors: first one stores pointer to objects that derive from the abstract class User, and second one stores pointer to objects that derive from the abstract class Room. Also there are methods in class University that can add poinets in vectors and get them.

## How to run the code

 CLion was used as the IDE for this project. If you have it, you will be able to open this project through it.
 
 So, first you want to add all possible type of room in vector. You can do it like this:
 
    Innopolis.addClassRoom({123});
    Innopolis.addLectureRoom({108});
    Innopolis.addConferenceRoom({306});
    Innopolis.addCabinet({403});
    Innopolis.addDirectorCabinet({401});
 
 In abstract class Room there is function setAccessLevel(AccessLevel accesslevel) which can set Access level to each room. It can be set by those who run this code.
