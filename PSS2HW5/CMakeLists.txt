cmake_minimum_required(VERSION 3.17)
project(PSS2HW5)

set(CMAKE_CXX_STANDARD 14)

add_executable(PSS2HW5 main.cpp System.cpp System.h Status.cpp Status.h Passenger/PassengerGateWay.cpp Passenger/PassengerGateWay.h Passenger/Passenger.cpp Passenger/Passenger.h Driver/DriverGateWay.cpp Driver/DriverGateWay.h Driver/Driver.cpp Driver/Driver.h DataBase.cpp DataBase.h Car/Car.cpp Car/Car.h Car/EconomyCar.cpp Car/EconomyCar.h Car/ComfortCar.cpp Car/ComfortCar.h Car/ComfortPlusCar.cpp Car/ComfortPlusCar.h Car/BusinessCar.cpp Car/BusinessCar.h Admin/AdminGateWay.cpp Admin/AdminGateWay.h Admin/Admin.cpp Admin/Admin.h)