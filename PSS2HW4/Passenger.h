#ifndef PSS2HW4_PASSENGER_H
#define PSS2HW4_PASSENGER_H

#include <iostream>
#include <string>
#include <vector>
#include "DataBase.h"

using namespace std;

class Passenger{
public:
    Passenger(string _name){name = _name;}
    string getName(){return name;}
    string name;
    int rating;

    vector<string> payment_methods;
    void seePaymentMethods();
    void addPaymentMethod(string payment_method);
    void deletePaymentMethod(string payment_method);
    vector<string> pinned_addresses;
    void seePinnedAddresses();
    void addPinnedAddresses(string pinned_addresses);
    void deletePinnedAddresses(string pinned_addresses);
    vector<string> order_history;
    void seeOrderHistory();

    string addressFrom;
    void selectAddressFrom();
    string addressTo;
    void selectAddressTo();
    string carType;
    void selectCarType();
    string payment_method;
    void choosePaymentMethod(string _payment_method);

    int time_of_trip;
    void checkTime();
    int price;
    void checkPrice();

    DataBase* dataBase;
    void orderRide(DataBase* order);
};


#endif //PSS2HW4_PASSENGER_H