#ifndef PSS2HW_DRIVER_H
#define PSS2HW5_DRIVER_H

#include <iostream>
#include <string>
#include "Car/Car.h"
#include "Status.h"
#include "DataBase.h"
#include <vector>


using namespace std;

class Driver {
private:
    string name;
    int rating;
    Car car;
    Status status;
    vector<string> order_history;
public:
    explicit  Driver(string name):name(name){}
    string getName() const {return name;}
    void takeEconomyCar(const Car& economy_car);
    static void seeEconomyCar(const Car& economy_car);
    void takeComfortPlusCar(const Car& comfortplus_car);
    static void seeComfortPlusCar(const Car& comfortplus_car);
    void takeComfortCar(const Car& comfort_car);
    static void seeComfortCar(const Car& comfort_car);
    void takeBusinessCar(const Car& business_car);
    static void seeBusinessCar(const Car& business_car);


    void seeOrderHistory();
    void updateStatus(Status s);

    void checkAvailableOrders(DataBase* order) const;
    void acceptOrder(DataBase* order);
};


#endif //PSS2HW5_DRIVER_H