#ifndef PSS2HW5_PASSENGER_H
#define PSS2HW5_PASSENGER_H


#include <iostream>
#include <string>
#include <vector>
#include "DataBase.h"
using namespace std;

class Passenger{
private:

    string name;
    int rating;
    vector<string> payment_methods;
    vector<string> pinned_addresses;
    vector<string> order_history;
    string addressFrom;
    string addressTo;
    string carType;
    string payment_method;
    int time_of_trip;
    int length_of_trip;
    int price;
    DataBase* dataBase;
public:

    explicit Passenger(string name):name(name){}
    string getName() {return name;}

    void seePaymentMethods();
    void addPaymentMethod(const string &payment_method);
    void deletePaymentMethod(string &payment_method);

    void seePinnedAddresses();
    void addPinnedAddresses(const string &pinned_addresses);
    void deletePinnedAddresses(string &pinned_addresses);

    void seeOrderHistory();
    void selectAddressFrom();
    void selectAddressTo();
    void selectCarType();

    void choosePaymentMethod(string &_payment_method);
    void checkTime();
    void checkLength();
    void checkPrice();
    void orderRide(DataBase* order);
};


#endif //PSS2HW5_PASSENGER_H
