TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Car/BusinessCar.cpp \
        Car/Car.cpp \
        Car/ComfortCar.cpp \
        Car/ComfortPlusCar.cpp \
        Car/EconomyCar.cpp \
        DataBase.cpp \
        Driver.cpp \
        DriverGateWay.cpp \
        Passenger.cpp \
        PassengerGateWay.cpp \
        Status.cpp \
        System.cpp \
        main.cpp

HEADERS += \
    Car/BusinessCar.h \
    Car/Car.h \
    Car/ComfortCar.h \
    Car/ComfortPlusCar.h \
    Car/EconomyCar.h \
    DataBase.h \
    Driver.h \
    DriverGateWay.h \
    Passenger.h \
    PassengerGateWay.h \
    Status.h \
    System.h
