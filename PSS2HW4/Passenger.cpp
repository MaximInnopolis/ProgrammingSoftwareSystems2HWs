#include "Passenger.h"

void Passenger::seePaymentMethods() {
    for (string pm: payment_methods){
        cout << pm << endl;
    }
}

void Passenger::addPaymentMethod(string payment_method) {
    payment_methods.push_back(payment_method);
}

void Passenger::deletePaymentMethod(string payment_method) {
    for (int i = 0; i < payment_methods.size(); i++) {
        if (payment_methods[i] == payment_method) {
            payment_methods.erase(payment_methods.begin() + i);
        }
    }
}

void Passenger::seePinnedAddresses() {
    for (string pa: pinned_addresses){
        cout << pa << endl;
    }
}

void Passenger::addPinnedAddresses(string pinned_address) {
    pinned_addresses.push_back(pinned_address);
}

void Passenger::deletePinnedAddresses(string pinned_address) {
    for (int i = 0; i < pinned_addresses.size(); i++) {
        if (pinned_addresses[i] == pinned_address) {
            pinned_addresses.erase(pinned_addresses.begin() + i);
        }
    }
}

void Passenger::seeOrderHistory() {
    for (string oh: order_history){
        cout << oh << endl;
    }
}

void Passenger::selectAddressFrom() {
    cout << "Enter departure address: ";
    cin >> addressFrom;
    cout << "\n";
}

void Passenger::selectAddressTo() {
    cout << "Enter destination address: ";
    cin >> addressTo;
    cout << "\n";
}

void Passenger::selectCarType() {
    string tmp;
    cout << "Enter one of the following car type: Economy, ComfortPlus, Comfort, Business" << endl;
    cin >> tmp;
    if ((tmp == "Economy") || (tmp == "ComfortPlus") || (tmp == "Comfort") || (tmp == "Business")){
        carType = tmp;
    } else {
        cout << "Entered car type does not exist. He/she could enter one of the car types above" << endl;
    }
}

void Passenger::checkTime() {
    if ((carType != "") && (addressTo != "") && (addressFrom != "")) {
        if (carType == "Comfort") {
            time_of_trip = 20 + rand() % 10;
        }
        if (carType == "Economy") {
            time_of_trip = 30 + rand() % 10;
        }
        if (carType == "ComfortPlus"){
            time_of_trip = 25 + rand() % 10;
        }
        if (carType == "Business") {
            time_of_trip = 1 + rand() % 10;
        }
        cout << "Expected time for trip is: " << time_of_trip << " minutes" << endl;
    } else {
        cout << "First he/she should select car type, addresses of destination and departure" << endl;
    }
}

void Passenger::checkPrice() {
    if ((carType != "") && (addressTo != "") && (addressFrom != "")) {
        if (carType == "Comfort") {
            price = 200 + rand() % 50;
        }
        if (carType == "Economy") {
            price = 150 + rand() % 50;
        }
        if (carType == "ComfortPlus"){
            price = 230 + rand() % 50;
        }
        if (carType == "Business") {
            price = 250 + rand() % 50;
        }
        cout << "This trip cost " << price << " rubles" << endl;
    } else {
        cout << "To check price he/she should select car type, addresses of destination and departure" << endl;
    }
}

void Passenger::choosePaymentMethod(string _payment_method) {
    for (int i; i < payment_methods.size(); i++){
        if (_payment_method == payment_methods[i]){
            payment_method = _payment_method;
        }
    }
    if (payment_method != _payment_method){
        cout << "This payment method is not in his/her list of payment methods, he/she could add it to the list" << endl;
    } else {
        cout << "You successfully chose payment method" << endl;
    }
}

void Passenger::orderRide(DataBase* order) {
    if ((time_of_trip == 0) || (addressFrom == "") || (addressTo == "")){
        checkTime();
    }
    if ((addressFrom != "") && (addressTo != "")){
        cout << name <<" have ordered the ride from " << addressFrom << " to " << addressTo << endl;
        order->from.push_back(addressFrom);
        order->to.push_back(addressTo);
        order->time.push_back(time_of_trip);
        order_history.push_back("Trip from " + addressFrom + " to " + addressTo + ". Its time is " + to_string(time_of_trip));
        addressFrom = "";
        addressTo = "";
        time_of_trip = 0;
        length_of_trip = 0;
        price = 0;
        carType = "";
    }
}

void Passenger::checkLength() {
    if ((carType != "") && (addressTo != "") && (addressFrom != "") && (time_of_trip != 0)) {
        if (carType == "Comfort") {
            length_of_trip = 30 * time_of_trip/60;
        }
        if (carType == "Economy") {
            length_of_trip = 35 * time_of_trip/60;
        }
        if (carType == "ComfortPlus"){
            length_of_trip = 45 * time_of_trip/60;
        }
        if (carType == "Business") {
            length_of_trip = 50 * time_of_trip/60;
        }
        cout << "The length of trip is: " << length_of_trip << " kilometres" << endl;
    } else {
        cout << "First he/she should check time of the trip, select car type, addresses of destination and departure" << endl;
    }
}
