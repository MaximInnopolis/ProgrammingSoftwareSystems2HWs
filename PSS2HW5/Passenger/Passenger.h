#ifndef PSS2HW5_PASSENGER_H
#define PSS2HW5_PASSENGER_H


#include <iostream>
#include <string>
#include <vector>
#include "../DataBase.h"
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

    bool Possibility_to_seePaymentMethods;
    bool Possibility_to_addPaymentMethod;
    bool Possibility_to_deletePaymentMethod;
    bool Possibility_to_seePinnedAddresses;
    bool Possibility_to_addPinnedAddresses;
    bool Possibility_to_deletePinnedAddresses;
    bool Possibility_to_seeOrderHistory;
    bool Possibility_to_selectAnything;
    bool Possibility_to_checkAnything;
    bool Possibility_to_orderRide;
    bool Possibility_to_choosePaymentMethod;

public:




public:

    explicit Passenger(string name):name(name),
    Possibility_to_seePaymentMethods(true),
    Possibility_to_addPaymentMethod(true),
    Possibility_to_deletePaymentMethod(true),
    Possibility_to_seePinnedAddresses(true),
    Possibility_to_addPinnedAddresses(true),
    Possibility_to_deletePinnedAddresses(true),
    Possibility_to_seeOrderHistory(true),
    Possibility_to_selectAnything(true),
    Possibility_to_checkAnything(true),
    Possibility_to_orderRide(true),
    Possibility_to_choosePaymentMethod(true) {}

    string getName() {return name;}

    //Setters and Getters
    bool isPossibilityToSeePaymentMethods() const;
    void setPossibilityToSeePaymentMethods(bool possibilityToSeePaymentMethods);
    bool isPossibilityToAddPaymentMethod() const;
    void setPossibilityToAddPaymentMethod(bool possibilityToAddPaymentMethod);
    bool isPossibilityToDeletePaymentMethod() const;
    void setPossibilityToDeletePaymentMethod(bool possibilityToDeletePaymentMethod);
    bool isPossibilityToSeePinnedAddresses() const;
    void setPossibilityToSeePinnedAddresses(bool possibilityToSeePinnedAddresses);
    bool isPossibilityToAddPinnedAddresses() const;
    void setPossibilityToAddPinnedAddresses(bool possibilityToAddPinnedAddresses);
    bool isPossibilityToDeletePinnedAddresses() const;
    void setPossibilityToDeletePinnedAddresses(bool possibilityToDeletePinnedAddresses);
    bool isPossibilityToSeeOrderHistory() const;
    void setPossibilityToSeeOrderHistory(bool possibilityToSeeOrderHistory);
    bool isPossibilityToSelectAnything() const;
    void setPossibilityToSelectAnything(bool possibilityToSelectAnything);
    bool isPossibilityToCheckAnything() const;
    void setPossibilityToCheckAnything(bool possibilityToCheckAnything);
    bool isPossibilityToOrderRide() const;
    void setPossibilityToOrderRide(bool possibilityToOrderRide);
    bool isPossibilityToChoosePaymentMethod() const;
    void setPossibilityToChoosePaymentMethod(bool possibilityToChoosePaymentMethod);

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
