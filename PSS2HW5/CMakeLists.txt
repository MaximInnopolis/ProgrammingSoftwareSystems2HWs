cmake_minimum_required(VERSION 3.17)
project(PSS2HW5)

set(CMAKE_CXX_STANDARD 14)

add_executable(PSS2HW5 main.cpp System.cpp System.h Status.cpp Status.h PassengerGateWay.cpp PassengerGateWay.h Passenger.cpp Passenger.h DriverGateWay.cpp DriverGateWay.h Driver.cpp Driver.h DataBase.cpp DataBase.h Car/Car.cpp Car/Car.h Car/EconomyCar.cpp Car/EconomyCar.h Car/ComfortCar.cpp Car/ComfortCar.h Car/ComfortPlusCar.cpp Car/ComfortPlusCar.h Car/BusinessCar.cpp Car/BusinessCar.h)