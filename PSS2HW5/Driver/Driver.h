#ifndef PSS2HW5_DRIVER_H
#define PSS2HW5_DRIVER_H

#include <iostream>
#include <string>
#include "../Car/Car.h"
#include "../Status.h"
#include "../DataBase.h"
#include <vector>

using namespace std;

class Driver {
private:
    string name;
    int rating;
    vector <Car> list_of_cars;
    Status status;
    vector<string> order_history;
    bool possibility_to_take_car;
    bool possibility_to_see_car;
    bool possibility_to_see_order_history;
    bool possibility_to_update_status;
    bool possibility_to_check_available_orders;
    bool possibility_to_accept_orders;
public:
    explicit Driver(string name):name(name),possibility_to_take_car(true),possibility_to_see_car(true){}
    string getName() const {return name;}
    bool isPossibilityToTakeCar() const;
    void setPossibilityToTakeCar(bool possibilityToTakeCar);
    bool isPossibilityToSeeCar() const;
    void setPossibilityToSeeCar(bool possibilityToSeeCar);
    bool isPossibilityToSeeOrderHistory() const;
    void setPossibilityToSeeOrderHistory(bool possibilityTooSeeOrderHistory);
    bool isPossibilityToCheckAvailableOrders() const;
    void setPossibilityToCheckAvailableOrders(bool possibilityToCheckAvailableOrders);
    bool isPossibilityToAcceptOrders() const;
    void setPossibilityToAcceptOrders(bool possibilityToAcceptOrder);
    bool isPossibilityToUpdateStatus() const;
    void setPossibilityToUpdateStatus(bool possibilityToUpdateStatus);


    void takeEconomyCar(const Car& economy_car);
    void seeEconomyCar();
    void takeComfortPlusCar(const Car& comfortplus_car);
    void seeComfortPlusCar();
    void takeComfortCar(const Car& comfort_car);
    void seeComfortCar();
    void takeBusinessCar(const Car& business_car);
    void seeBusinessCar();


    void seeOrderHistory();
    void updateStatus(Status s);

    void checkAvailableOrders(DataBase* order) const;
    void acceptOrder(DataBase* order);
};


#endif //PSS2HW5_DRIVER_H
