#include <iostream>
#include "System.h"
#include "PassengerGateWay.h"
#include "DriverGateWay.h"
#include "Car/EconomyCar.h"
#include "Car/BusinessCar.h"
#include "Car/ComfortPlusCar.h"
#include "Car/ComfortCar.h"

int main() {
    System system;
    cout << system.name <<'\n' << endl;
    PassengerGateWay passengerGateWay(&system);
    DriverGateWay driverGateWay(&system);
    DataBase dataBase;
    DataBase* ptrDatabase = &dataBase;

    Car car;

    EconomyCar economyCar1;
    economyCar1.number = "ab000c";
    economyCar1.color = "blue";
    economyCar1.model = "Mercedes";

    ComfortPlusCar comfortPlusCar1;
    comfortPlusCar1.number = "fg010c";
    comfortPlusCar1.color = "red";
    comfortPlusCar1.model = "Porche";

    ComfortCar comfortCar1;
    comfortCar1.number = "zn921h";
    comfortCar1.color = "yellow";
    comfortCar1.model = "Ford";

    BusinessCar businessCar1;
    businessCar1.number = "ob315p";
    businessCar1.color = "green";
    businessCar1.model = "Lada";

    passengerGateWay.passengerLogIn(Passenger("Maxim"));
    driverGateWay.driverLogIn(Driver("Leonid"));

    driverGateWay.getDriver("Leonid")->takeBusinessCar(businessCar1);

    passengerGateWay.getPassenger("Maxim")->selectAddressFrom();
    passengerGateWay.getPassenger("Maxim")->selectAddressTo();
    passengerGateWay.getPassenger("Maxim")->selectCarType();
    passengerGateWay.getPassenger("Maxim")->checkTime();
    passengerGateWay.getPassenger("Maxim")->checkPrice();
    passengerGateWay.getPassenger("Maxim")->checkLength();
    passengerGateWay.getPassenger("Maxim")->orderRide(ptrDatabase);
    passengerGateWay.getPassenger("Maxim")->addPaymentMethod("Cache");
    passengerGateWay.getPassenger("Maxim")->addPaymentMethod("Card");
    passengerGateWay.getPassenger("Maxim")->addPinnedAddresses("Universitetskay");
    passengerGateWay.getPassenger("Maxim")->addPinnedAddresses("Ploshad");


    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    driverGateWay.getDriver("Leonid")->checkAvailableOrders(ptrDatabase);
    driverGateWay.getDriver("Leonid")->acceptOrder(ptrDatabase);
    

    return 0;
}
