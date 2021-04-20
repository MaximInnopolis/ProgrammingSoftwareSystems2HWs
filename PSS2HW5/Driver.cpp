#include "Driver.h"
#include "Car/ComfortCar.h"
#include "Car/ComfortPlusCar.h"
#include "Car/BusinessCar.h"

void Driver::updateStatus(Status s) {
    status = s;
}

void Driver::seeOrderHistory() {
    for (const string &oh: order_history){
        cout << oh << "\n" << endl;
    }
}

void Driver::seeEconomyCar(const Car &economy_car) {
    cout << "Car has number: " << economy_car.number << ", its color is : " << economy_car.color << ", its model is: " << economy_car.model << ", its type is: "<< economy_car.carType << "\n" << endl;
}

void Driver::takeEconomyCar(const Car &economy_car) {
    car = economy_car;
    cout << "Driver " << name << " took car that has number: "  << economy_car.number << ", its color is:" << economy_car.color << ", its model is: " << economy_car.model << ", its type is: "<< economy_car.carType << "\n" << endl;
}

void Driver::takeComfortPlusCar(const Car &comfortplus_car) {
    car = comfortplus_car;
    cout << "Driver " << name << " took car that has number: "  << comfortplus_car.number << ", its color is:" << comfortplus_car.color << ", its model is: " << comfortplus_car.model << ", its type is: "<< comfortplus_car.carType << "\n" << endl;
}

void Driver::seeComfortPlusCar(const Car &comfortplus_car) {
    cout << "Car has number: " << comfortplus_car.number << ", its color is: " << comfortplus_car.color << ", its model is: " << comfortplus_car.model << ", its type is: "<< comfortplus_car.carType << "\n" << endl;
}

void Driver::takeComfortCar(const Car &comfort_car) {
    car = comfort_car;
    cout << "Driver " << name << " took car that has number: "  << comfort_car.number << ", its color is:" << comfort_car.color << ", its model is: " << comfort_car.model << ", its type is: "<< comfort_car.carType << "\n" << endl;
}

void Driver::seeComfortCar(const Car &comfort_car) {
    cout << "Car has number: " << comfort_car.number << ", its color is: " << comfort_car.color << ", its model is: " << comfort_car.model << ", its type is: "<< comfort_car.carType << "\n" << endl;
}

void Driver::takeBusinessCar(const Car &business_car) {
    car = business_car;
    cout << "Driver " << name << " took car that has number: "  << business_car.number << ", its color is:" << business_car.color << ", its model is: " << business_car.model << ", its type is: "<< business_car.carType << "\n" << endl;
}

void Driver::seeBusinessCar(const Car &business_car) {
    cout << "Car has number: " << business_car.number << ", its color is: " << business_car.color << ", its model is: " << business_car.model << ", its type is: "<< business_car.carType << "\n" << endl;
}

void Driver::checkAvailableOrders(DataBase* order) const {
    bool flag = false;
    for (int i = 0; i < order->carType.size(); i++){
        if (order->carType[i] == car.carType){
            flag = true;
            break;
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
    for (int i = 0; i < order->carType.size(); i++){
        if (order->carType[i] == car.carType){
            tmp_type = order->carType[i];
            it = i;
            break;
        }
    }
    if ((order->carType.empty()) || (tmp_type.empty())){
        cout << "There are no available order to accept or car type of these orders does not match to car type of driver " << name << "\n" << endl;
    } else {
        order_history.push_back("Trip on car of type " + car.carType + " from "+ order->from[it] + " to " + order->to[it] + ". Its time is " + to_string(order->time[it]) + " minutes");
        cout << name << " accepted order" << "\n" << endl;
        order->time.erase(order->time.begin() + it);
        order->to.erase(order->to.begin() + it);
        order->from.erase(order->from.begin() + it);
        order->carType.erase(order->carType.begin() + it);
        if (car.carType == "Comfort"){
            auto* comfortCar = new ComfortCar(car);
            comfortCar->decreaseFreeBottleOfwater();
        }
        if (car.carType == "ComfortPlus"){
            auto* comfortPlusCar = new ComfortPlusCar(car);
            comfortPlusCar->decreaseFreeBottleOfwater();
        }
        if (car.carType == "Busines"){
            auto* businessCar = new BusinessCar(car);
            businessCar->parkRightInFrontOfTheEntrance();
        }
    }
}