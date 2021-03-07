# Programming-Software-Systems-2-Introduction-to-Programming-2-
<<<<<<< HEAD
<<<<<<< HEAD
=======

There are 3 functions in the project:
breakSen, makeUpper, main

Important thing to mention is that in function **main** the paths to the files in.txt and out.txt are specified.

C:\\Users\\user\\CLionProjects\\PSS2HW1\\out.txt	

C:\\Users\\user\\CLionProjects\\PSS2HW1\\in.txt

These paths are only suitable for my computer.

For the program to work correctly with them, you will need to specify the path to these files on your personal computer.
____

Another important thing is that if there are 2 or more words in the sentence that are match with words in the last line of input file output file consists of line:

Word **x** matched **n** time(s) in the sentence(s) below:

“Sentence”, where matched word 1st time

“Sentence”, where matched word 2nd time

And so on. However all of this mentioning will be uppercasted because it was not mentioned in the technical task 

At the worst, I zipped my project on Moodle

>>>>>>> PSSHW2
=======

There is a system which members can communicate to each other. In the main function there is a possibility to see its usage.

## System description

                     Abstract class User <______                                     Abstract class Room  <______
            _________^  ^  ^  ^  ^___________   \___Student                  _______^  ^   ^         ^______     \----------ClassRoom
      _____/     ______/   |  |____________  \__________                    |          |   |____________    \______________            
     |          /          |               \            \                   |           \               \_                 \Cabinet
    Admin    Director   DroppedStudent   LabEmployee    Professor        LectureRoom   DirectorCabinet    ConferenceRoom
<<<<<<< HEAD
>>>>>>> 073e4bd2f0562b1bdfdaa8e6b60753fc83781f4f
=======

Class University is needed to store pointers to objects of derived classes in vector. There are 2 vectors: first one stores pointer to objects that derive from the abstract class User, and second one stores pointer to objects that derive from the abstract class Room. Also there are methods in class University that can add poinets in vectors and get them.

## How to run the code

 CLion was used as the IDE for this project. If you have it, you will be able to open this project through it.
 
 So, first you want to add all possible type of room in vector. You can do it like this:
 
    Innopolis.addClassRoom({123});
    Innopolis.addLectureRoom({108});
    Innopolis.addConferenceRoom({306});
    Innopolis.addCabinet({403});
    Innopolis.addDirectorCabinet({401});
 
In abstract class Room there is function setAccessLevel(AccessLevel accesslevel) which can set Access level to each room. It can be set by those who run this code. You can do it after adding this rooms in vector.You can do it like this:

    Room* room1 = Innopolis.getRoom(123);               //Create pointer to an object of base class 
    ClassRoom* pr1 = dynamic_cast<ClassRoom*>(room1);   //Convert pointer to an derived class  
    pr1->setAccessLevel(GREEN);                         //Set access level to GREEN
    
  After that you can add users in vector like this:
    
    Innopolis.addStudent({"Maxim"});
    Innopolis.addLabEmployee({"Oleg"});
    Innopolis.addProfessor({"Adil"});
    Innopolis.addAdmin({"Kosha"});
    Innopolis.addDirector({"Tormasov"});
    
All users can try to open some room. If you want user to try to open some room you can write like this:

    Innopolis.getUser("Maxim")->tryOpenRoom(Innopolis.getRoom(401));
    Innopolis.getUser("Tormasov")->tryOpenRoom(Innopolis.getRoom(401));
    
If you want to use method that is special for him you should first create pointer to an object of base class and after that convert pointer to an derived class like it was showed from above and like this: 

    User* admin1 = Innopolis.getUser("Kosha");
    Admin* pa = dynamic_cast<Admin*>(admin1);

    User* student1 = Innopolis.getUser("Bobby");
    Student* ps = dynamic_cast<Student*>(student1);

After that you will be able to call methods like this:

    pa->blockRoom(Innopolis.getRoom(403)); // You called function of user of type admin. He can block room for everyone except admins.
    ps->spamInChat();                      // You called function of user of type student


>>>>>>> 1f80e2904748dbe569aecbda8b87e9de3b4a7273
