cmake_minimum_required(VERSION 3.17)
project(PSS2HW4)

set(CMAKE_CXX_STANDARD 14)

add_executable(PSS2HW4 main.cpp Passenger.h Passenger.cpp Driver.cpp Driver.h PassengerGateWay.cpp PassengerGateWay.h DriverGateWay.cpp DriverGateWay.h System.cpp System.h Car.cpp Car.h)