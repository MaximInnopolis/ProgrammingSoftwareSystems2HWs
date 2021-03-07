# Programming-Software-Systems-2-Introduction-to-Programming-2-

There is a system which members can communicate to each other. In the main function there is a possibility to see its usage.

## System description

                     Abstract class USER <______                                     Abstract class ROOM  <______
            _________^  ^  ^  ^  ^___________   \___Student                  _______^  ^   ^         ^______     \----------ClassRoom
      _____/     ______/   |  |____________  \__________                    |          |   |____________    \______________            
     |          /          |               \            \                   |           \               \_                 \Cabinet
    Admin    Director   DroppedStudent   LabEmployee    Professor        LectureRoom   DirectorCabinet    ConferenceRoom

Class University is needed to store pointers to objects of derived classes in vector. There are 2 vectors: first one stores pointer to objects that derive from the abstract class USER, and second one stores pointer to objects that derive from the abstract class ROOM.
