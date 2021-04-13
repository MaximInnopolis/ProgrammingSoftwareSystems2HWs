#include "Driver.h"

void Driver::updateStatus(Status s) {
    status = s;
}

void Driver::seeOrderHistory() {
    for (string oh: order_history){
        cout << oh << endl;
    }
}

void Driver::seeEconomyCar(const Car &economy_car) {
    cout << "Car has number: " << economy_car.number << ", its color is : " << economy_car.color << ", its model is: " << economy_car.model << ", its type is: "<< economy_car.carType << endl;
}

void Driver::takeEconomyCar(const Car &economy_car) {
    car = economy_car;
    cout << "Driver " << name << " took car that has number: "  << economy_car.number << ", its color is :" << economy_car.color << ", its model is: " << economy_car.model << ", its type is: "<< economy_car.carType << endl;
}

void Driver::takeComfortPlusCar(const Car &comfortplus_car) {
    car = comfortplus_car;
    cout << "Driver " << name << " took car that has number: "  << comfortplus_car.number << ", its color is :" << comfortplus_car.color << ", its model is: " << comfortplus_car.model << ", its type is: "<< comfortplus_car.carType << endl;
}

void Driver::seeComfortPlusCar(const Car &comfortplus_car) {
    cout << "Car has number: " << comfortplus_car.number << ", its color is : " << comfortplus_car.color << ", its model is: " << comfortplus_car.model << ", its type is: "<< comfortplus_car.carType << endl;
}

void Driver::takeComfortCar(const Car &comfort_car) {
    car = comfort_car;
    cout << "Driver " << name << " took car that has number: "  << comfort_car.number << ", its color is :" << comfort_car.color << ", its model is: " << comfort_car.model << ", its type is: "<< comfort_car.carType << endl;
}

void Driver::seeComfortCar(const Car &comfort_car) {
    cout << "Car has number: " << comfort_car.number << ", its color is : " << comfort_car.color << ", its model is: " << comfort_car.model << ", its type is: "<< comfort_car.carType << endl;
}

void Driver::takeBusinessCar(const Car &business_car) {
    car = business_car;
    cout << "Driver " << name << " took car that has number: "  << business_car.number << ", its color is :" << business_car.color << ", its model is: " << business_car.model << ", its type is: "<< business_car.carType << endl;
}

void Driver::seeBusinessCar(const Car &business_car) {
    cout << "Car has number: " << business_car.number << ", its color is : " << business_car.color << ", its model is: " << business_car.model << ", its type is: "<< business_car.carType << endl;
}

void Driver::checkAvailableOrders(DataBase* order) {
    if (order->time.empty()){
        cout << "There are no available orders" << endl;
    } else if (order->time[0] != 0){
        cout << "There is at least 1 available order" << endl;
    }
}

void Driver::acceptFirstOrder(DataBase* order) {
    order_history.push_back("Trip from " + order->from[0] + " to " + order->to[0] + ". Its time is " + to_string(order->time[0]));
    cout << name <<" accepted order." << endl;
    order->time.erase (order->time.begin(),order->time.begin()+1);
    order->to.erase (order->to.begin(),order->to.begin()+1);
    order->from.erase (order->from.begin(),order->from.begin()+1);
}
