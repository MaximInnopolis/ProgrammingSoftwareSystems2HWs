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
protected:
    string name;
    int rating;
    Car car;

    Status status;
    vector<string> order_history;

    DataBase* dataBase;

public:
    explicit Driver(string _name){name = _name;}
    string getName(){return name;}
    void takeEconomyCar(const Car& economy_car);
    void seeEconomyCar(const Car& economy_car);
    void takeComfortPlusCar(const Car& comfortplus_car);
    void seeComfortPlusCar(const Car& comfortplus_car);
    void takeComfortCar(const Car& comfort_car);
    void seeComfortCar(const Car& comfort_car);
    void takeBusinessCar(const Car& business_car);
    void seeBusinessCar(const Car& business_car);

    void seeOrderHistory();
    void updateStatus(Status s);

    void checkAvailableOrders(DataBase* order);
    void acceptOrder(DataBase* order);
};


#endif //PSS2HW4_DRIVER_H
