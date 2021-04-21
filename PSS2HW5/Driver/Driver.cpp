#include "Driver.h"
#include "../Car/ComfortCar.h"
#include "../Car/ComfortPlusCar.h"
#include "../Car/BusinessCar.h"

void Driver::updateStatus(Status s) {
    status = s;
}

void Driver::seeOrderHistory() {
    for (const string &oh: order_history){
        cout << oh << "\n" << endl;
    }
}

void Driver::seeEconomyCar() {
    if (!possibility_to_see_car) throw invalid_argument("There is no possibility to see economy car.\n");
    else {
        bool flag = false;
        for (auto ec: list_of_cars)
            if (ec.carType == "Economy") {
                flag = true;
                cout << "Car has number: " << ec.number << ", its color is : " << ec.color
                     << ", its model is: " << ec.model << ", its type is: " << ec.carType << "\n" << endl;
                break;
            }
        if (!flag) cout << "There is no economy car in list of cars\n" << endl;
    }
}

void Driver::takeEconomyCar(const Car &economy_car) {
    if (!possibility_to_take_car) throw invalid_argument("There is no possibility to take economy car.\n");
    else
        list_of_cars.push_back(economy_car);
        cout << "Driver " << name << " took car that has number: "  << economy_car.number << ", its color is:" << economy_car.color << ", its model is: " << economy_car.model << ", its type is: "<< economy_car.carType << "\n" << endl;
}

void Driver::takeComfortPlusCar(const Car &comfortplus_car) {
    if (!possibility_to_take_car) throw invalid_argument("There is no possibility to take comfort plus car.\n");
    else
        list_of_cars.push_back(comfortplus_car);
        cout << "Driver " << name << " took car that has number: "  << comfortplus_car.number << ", its color is:" << comfortplus_car.color << ", its model is: " << comfortplus_car.model << ", its type is: "<< comfortplus_car.carType << "\n" << endl;
}

void Driver::seeComfortPlusCar() {
    if (!possibility_to_see_car) throw invalid_argument("There is no possibility to see comfort plus car.\n");
    else {
        bool flag = false;
        for (auto cpc: list_of_cars)
            if (cpc.carType == "ComfortPlus") {
                flag = true;
                cout << "Car has number: " << cpc.number << ", its color is: " << cpc.color << ", its model is: "
                     << cpc.model << ", its type is: " << cpc.carType << "\n" << endl;
                break;
            }
        if (!flag) cout << "There is no comfort plus car in list of cars\n" << endl;
    }
}

void Driver::takeComfortCar(const Car &comfort_car) {
    if (!possibility_to_take_car) throw invalid_argument("There is no possibility to take comfort car.\n");
    list_of_cars.push_back(comfort_car);
    cout << "Driver " << name << " took car that has number: "  << comfort_car.number << ", its color is:" << comfort_car.color << ", its model is: " << comfort_car.model << ", its type is: "<< comfort_car.carType << "\n" << endl;
}

void Driver::seeComfortCar() {
    if (!possibility_to_see_car) throw invalid_argument("There is no possibility to see comfort car.\n");
    else {
        bool flag = false;
        for (auto cc: list_of_cars)
            if (cc.carType == "Comfort") {
                flag = true;
                cout << "Car has number: " << cc.number << ", its color is: " << cc.color << ", its model is: "
                     << cc.model << ", its type is: " << cc.carType << "\n" << endl;
                break;
            }
        if (!flag) cout << "There is no comfort car in list of cars\n" << endl;
    }
}

void Driver::takeBusinessCar(const Car &business_car) {
    if (!possibility_to_take_car) throw invalid_argument("There is no possibility to take business car.\n");
    list_of_cars.push_back(business_car);
    cout << "Driver " << name << " took car that has number: "  << business_car.number << ", its color is:" << business_car.color << ", its model is: " << business_car.model << ", its type is: "<< business_car.carType << "\n" << endl;
}

void Driver::seeBusinessCar() {
    if (!possibility_to_see_car) throw invalid_argument("There is no possibility to see business car.\n");
    else {
        bool flag = false;
        for (auto bc: list_of_cars)
            if (bc.carType == "Comfort") {
                flag = true;
                cout << "Car has number: " << bc.number << ", its color is: " << bc.color << ", its model is: "
                     << bc.model << ", its type is: " << bc.carType << "\n" << endl;
                break;
            }
        if (!flag) cout << "There is no business car in list of cars\n" << endl;
    }
}

void Driver::checkAvailableOrders(DataBase* order) const {
    bool flag = false;
    for (int i = 0; i < order->carType.size(); i++){
        for (auto c : list_of_cars) {
            if (order->carType[i] == c.carType) {
                flag = true;
                break;
            }
        }
    }
    if (flag == 0){
        cout << "There are no available orders or car type of these orders does not match to car type of driver " << name << "\n" << endl;
    } else {
        cout << "There is at least 1 available order \n" << endl;
    }
}

void Driver::acceptOrder(DataBase* order) {
    string tmp_type;
    int it = 0;
    int i_car_in_list = 0;
    for (int i = 0; i < order->carType.size(); i++){
        for (int j = 0; j < list_of_cars.size();j++) {
            if (order->carType[i] == list_of_cars[j].carType) {
                tmp_type = order->carType[i];
                i_car_in_list = j;
                it = i;
                break;
            }
        }
    }
    if ((order->carType.empty()) || (tmp_type.empty())){
        cout << "There are no available order to accept or car type of these orders does not match to car type of driver " << name << "\n" << endl;
    } else {
        order_history.push_back("Trip on car of type " + list_of_cars[i_car_in_list].carType + " from "+ order->from[it] + " to " + order->to[it] + ". Its time is " + to_string(order->time[it]) + " minutes");
        cout << name << " accepted order on car of type " << list_of_cars[i_car_in_list].carType << " from " << order->from[it] << " to " << order->to[it] << ". Its time is " << to_string(order->time[it]) << " minutes\n" << endl;
        order->time.erase(order->time.begin() + it);
        order->to.erase(order->to.begin() + it);
        order->from.erase(order->from.begin() + it);
        order->carType.erase(order->carType.begin() + it);
    }
}

void Driver::setPossibilityToTakeCar(bool possibilityToTakeCar) {
    possibility_to_take_car = possibilityToTakeCar;
}

bool Driver::isPossibilityToTakeCar() const {
    return possibility_to_take_car;
}

bool Driver::isPossibilityToSeeCar() const {
    return possibility_to_see_car;
}

void Driver::setPossibilityToSeeCar(bool possibilityToSeeCar) {
    possibility_to_see_car = possibilityToSeeCar;
}

bool Driver::isPossibilityToSeeOrderHistory() const {
    return possibility_to_see_order_history;
}

void Driver::setPossibilityToSeeOrderHistory(bool possibilityToSeeOrderHistory) {
    possibility_to_see_order_history = possibilityToSeeOrderHistory;
}

bool Driver::isPossibilityToUpdateStatus() const {
    return possibility_to_update_status;
}

void Driver::setPossibilityToUpdateStatus(bool possibilityToUpdateStatus) {
    possibility_to_update_status = possibilityToUpdateStatus;
}

bool Driver::isPossibilityToCheckAvailableOrders() const {
    return possibility_to_check_available_orders;
}

void Driver::setPossibilityToCheckAvailableOrders(bool possibilityToCheckAvailableOrders) {
    possibility_to_check_available_orders = possibilityToCheckAvailableOrders;
}

bool Driver::isPossibilityToAcceptOrders() const {
    return possibility_to_accept_orders;
}

void Driver::setPossibilityToAcceptOrders(bool possibilityToAcceptOrder) {
    possibility_to_accept_orders = possibilityToAcceptOrder;
}
