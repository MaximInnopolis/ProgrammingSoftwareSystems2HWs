cmake_minimum_required(VERSION 3.17)
project(PSS2HW3)

set(CMAKE_CXX_STANDARD 17)

add_executable(PSS2HW3 main.cpp User/User.h Room/Room.h AccessLevel.h University.h University.cpp "User/Header files/Admin.h" "User/Header files/Director.h" "User/Header files/Guest.h" "User/Header files/LabEmployee.h" "User/Header files/Professor.h" "User/Header files/Student.h" "User/Cpp files/Admin.cpp" "User/Cpp files/Director.cpp" "User/Cpp files/Guest.cpp" "User/Cpp files/LabEmployee.cpp" "User/Cpp files/Professor.cpp" "User/Cpp files/Student.cpp" Room/Room.cpp "Room/Header files/Cabinet.h" "Room/Header files/ClassRoom.h" "Room/Header files/ConferenceRoom.h" "Room/Header files/DirectorCabinet.h" "Room/Header files/LectureRoom.h" "Room/Cpp files/Cabinet.cpp" "Room/Cpp files/ClassRoom.cpp" "Room/Cpp files/ConferenceRoom.cpp" "Room/Cpp files/DirectorCabinet.cpp" "Room/Cpp files/LectureRoom.cpp" AccessLevel.cpp User/User.cpp)