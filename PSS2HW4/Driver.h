#ifndef PSS2HW4_DRIVER_H
#define PSS2HW4_DRIVER_H

#include <iostream>
#include <string>
#include "Car/Car.h"
#include "Status.h"
#include "DataBase.h"
#include <vector>


using namespace std;

class Driver {
public:
    Driver(string _name){name = _name;}
    string getName(){return name;}
    string name;
    int rating;
    Car car;
    void takeEconomyCar(const Car& economy_car);
    void seeEconomyCar(const Car& economy_car);
    void takeComfortPlusCar(const Car& comfortplus_car);
    void seeComfortPlusCar(const Car& comfortplus_car);
    void takeComfortCar(const Car& comfort_car);
    void seeComfortCar(const Car& comfort_car);
    void takeBusinessCar(const Car& business_car);
    void seeBusinessCar(const Car& business_car);

    Status status;
    vector<string> order_history;
    void seeOrderHistory();
    void updateStatus(Status s);

    DataBase* dataBase;
    void checkAvailableOrders(DataBase* order);
    void acceptFirstOrder(DataBase* order);
};


#endif //PSS2HW4_DRIVER_H