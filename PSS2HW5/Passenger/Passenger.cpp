#include "Passenger.h"

void Passenger::seePaymentMethods() {
    if (!Possibility_to_seePaymentMethods) throw invalid_argument("There is no possibility to see payment methods.\n");
    else {
        for (const string &pm: payment_methods) {
            cout << pm << "\n" << endl;
        }
    }
}

void Passenger::addPaymentMethod(const string &payment_method) {
    if (!Possibility_to_addPaymentMethod) throw invalid_argument("There is no possibility to add payment method.\n");
    else payment_methods.push_back(payment_method);
}

void Passenger::deletePaymentMethod(string &payment_method) {
    if (!Possibility_to_deletePaymentMethod) throw invalid_argument("There is no possibility to delete payment method.\n");
    else {
        for (int i = 0; i < payment_methods.size(); i++) {
            if (payment_methods[i] == payment_method) {
                payment_methods.erase(payment_methods.begin() + i);
            }
        }
    }
}

void Passenger::seePinnedAddresses() {
    if (!Possibility_to_seePinnedAddresses) throw invalid_argument("There is no possibility to see pinned addresses.\n");
    else {
        for (const string &pa: pinned_addresses) {
            cout << pa << "\n" << endl;
        }
    }
}

void Passenger::addPinnedAddresses(const string &pinned_address) {
    if (!Possibility_to_addPinnedAddresses) throw invalid_argument("There is no possibility to add pinned addresses.\n");
    else pinned_addresses.push_back(pinned_address);
}

void Passenger::deletePinnedAddresses(string &pinned_address) {
    if (!Possibility_to_deletePinnedAddresses) throw invalid_argument("There is no possibility to delete pinned addresses.\n");
    else {
        for (int i = 0; i < pinned_addresses.size(); i++) {
            if (pinned_addresses[i] == pinned_address) {
                pinned_addresses.erase(pinned_addresses.begin() + i);
            }
        }
    }
}

void Passenger::seeOrderHistory() {
    if (!Possibility_to_seeOrderHistory) throw invalid_argument("There is no possibility to see order history.\n");
    else {
        for (const string &oh: order_history) {
            cout << oh << "\n" << endl;
        }
    }
}

void Passenger::selectAddressFrom() {
    if (!Possibility_to_selectAnything) throw invalid_argument("There is no possibility to select it");
    else {
        cout << "Enter departure address: ";
        cin >> addressFrom;
        cout << "\n";
    }
}

void Passenger::selectAddressTo() {
    if (!Possibility_to_selectAnything) throw invalid_argument("There is no possibility to select it");
    else {
        cout << "Enter destination address: ";
        cin >> addressTo;
        cout << "\n";
    }
}

void Passenger::selectCarType() {
    if (!Possibility_to_selectAnything) throw invalid_argument("There is no possibility to select it");
    else {
        string tmp;
        cout << "Enter one of the following car type: Economy, ComfortPlus, Comfort, Business" << "\n" << endl;
        cin >> tmp;
        if ((tmp == "Economy") || (tmp == "ComfortPlus") || (tmp == "Comfort") || (tmp == "Business")) {
            carType = tmp;
        } else {
            cout << "Entered car type does not exist. He/she could enter one of the car types above" << "\n" << endl;
        }
    }
}

void Passenger::checkTime() {
    if (!Possibility_to_checkAnything) throw invalid_argument("There is no possibility to check it");
    else {
        if ((!carType.empty()) && (!addressTo.empty()) && (!addressFrom.empty())) {
            if (carType == "Comfort") {
                time_of_trip = 20 + rand() % 10;
            }
            if (carType == "Economy") {
                time_of_trip = 30 + rand() % 10;
            }
            if (carType == "ComfortPlus") {
                time_of_trip = 25 + rand() % 10;
            }
            if (carType == "Business") {
                time_of_trip = 15 + rand() % 10;
            }
            cout << "Expected time for trip is: " << time_of_trip << " minutes" << "\n" << endl;
        } else {
            cout << "First he/she should select car type, addresses of destination and departure" << "\n" << endl;
        }
    }
}

void Passenger::checkPrice() {
    if (!Possibility_to_checkAnything) throw invalid_argument("There is no possibility to check it");
    else {
        if ((!carType.empty()) && (!addressTo.empty()) && (!addressFrom.empty())) {
            if (carType == "Comfort") {
                price = 200 + rand() % 50;
            }
            if (carType == "Economy") {
                price = 150 + rand() % 50;
            }
            if (carType == "ComfortPlus") {
                price = 230 + rand() % 50;
            }
            if (carType == "Business") {
                price = 250 + rand() % 50;
            }
            cout << "This trip cost " << price << " rubles" << "\n" << endl;
        } else {
            cout << "To check price he/she should select car type, addresses of destination and departure" << "\n"
                 << endl;
        }
    }
}

void Passenger::choosePaymentMethod(string &_payment_method) {
    if (!Possibility_to_choosePaymentMethod) throw invalid_argument("There is no possibility to choose payment method");
    else {
        for (int i = 0; i < payment_methods.size(); i++) {
            if (_payment_method == payment_methods[i]) {
                payment_method = _payment_method;
            }
        }
        if (payment_method != _payment_method) {
            cout << "This payment method is not in his/her list of payment methods, he/she could add it to the list"
                 << "\n" << endl;
        } else {
            cout << "You successfully chose payment method" << "\n" << endl;
        }
    }
}

void Passenger::orderRide(DataBase* order) {
    if (!Possibility_to_orderRide)throw invalid_argument("There is no possibility to order ride");
    else {
        if ((time_of_trip == 0) || (addressFrom.empty()) || (addressTo.empty()) || (carType.empty())) {
            checkTime();
        }
        if ((!addressFrom.empty()) && (!addressTo.empty())) {
            cout << name << " have ordered the ride from " << addressFrom << " to " << addressTo << "\n" << endl;
            order->from.push_back(addressFrom);
            order->to.push_back(addressTo);
            order->time.push_back(time_of_trip);
            order->carType.push_back(carType);
            order_history.push_back(
                    "Trip on car of type " + carType + " from " + addressFrom + " to " + addressTo + ". Its time is " +
                    to_string(time_of_trip) + " minutes");
            addressFrom = "";
            addressTo = "";
            time_of_trip = 0;
            length_of_trip = 0;
            price = 0;
            carType = "";
        }
    }
}

void Passenger::checkLength() {
    if (!Possibility_to_checkAnything) throw invalid_argument("There is no possibility to check it");
    else {
        if ((!carType.empty()) && (!addressTo.empty()) && (!addressFrom.empty()) && (time_of_trip != 0)) {
            if (carType == "Comfort") {
                length_of_trip = 30 * time_of_trip / 60;
            }
            if (carType == "Economy") {
                length_of_trip = 35 * time_of_trip / 60;
            }
            if (carType == "ComfortPlus") {
                length_of_trip = 45 * time_of_trip / 60;
            }
            if (carType == "Business") {
                length_of_trip = 50 * time_of_trip / 60;
            }
            cout << "The length of trip is: " << length_of_trip << " kilometres" << "\n" << endl;
        } else {
            cout
                    << "First he/she should check time of the trip, select car type, addresses of destination and departure"
                    << endl;
        }
    }
}


bool Passenger::isPossibilityToSeePaymentMethods() const {
    return Possibility_to_seePaymentMethods;
}

void Passenger::setPossibilityToSeePaymentMethods(bool possibilityToSeePaymentMethods) {
    Possibility_to_seePaymentMethods = possibilityToSeePaymentMethods;
}

bool Passenger::isPossibilityToAddPaymentMethod() const {
    return Possibility_to_addPaymentMethod;
}

void Passenger::setPossibilityToAddPaymentMethod(bool possibilityToAddPaymentMethod) {
    Possibility_to_addPaymentMethod = possibilityToAddPaymentMethod;
}

bool Passenger::isPossibilityToDeletePaymentMethod() const {
    return Possibility_to_deletePaymentMethod;
}

void Passenger::setPossibilityToDeletePaymentMethod(bool possibilityToDeletePaymentMethod) {
    Possibility_to_deletePaymentMethod = possibilityToDeletePaymentMethod;
}

bool Passenger::isPossibilityToSeePinnedAddresses() const {
    return Possibility_to_seePinnedAddresses;
}

void Passenger::setPossibilityToSeePinnedAddresses(bool possibilityToSeePinnedAddresses) {
    Possibility_to_seePinnedAddresses = possibilityToSeePinnedAddresses;
}

bool Passenger::isPossibilityToAddPinnedAddresses() const {
    return Possibility_to_addPinnedAddresses;
}

void Passenger::setPossibilityToAddPinnedAddresses(bool possibilityToAddPinnedAddresses) {
    Possibility_to_addPinnedAddresses = possibilityToAddPinnedAddresses;
}

bool Passenger::isPossibilityToDeletePinnedAddresses() const {
    return Possibility_to_deletePinnedAddresses;
}

void Passenger::setPossibilityToDeletePinnedAddresses(bool possibilityToDeletePinnedAddresses) {
    Possibility_to_deletePinnedAddresses = possibilityToDeletePinnedAddresses;
}

bool Passenger::isPossibilityToSeeOrderHistory() const {
    return Possibility_to_seeOrderHistory;
}

void Passenger::setPossibilityToSeeOrderHistory(bool possibilityToSeeOrderHistory) {
    Possibility_to_seeOrderHistory = possibilityToSeeOrderHistory;
}

bool Passenger::isPossibilityToSelectAnything() const {
    return Possibility_to_selectAnything;
}

void Passenger::setPossibilityToSelectAnything(bool possibilityToSelectAnything) {
    Possibility_to_selectAnything = possibilityToSelectAnything;
}

bool Passenger::isPossibilityToCheckAnything() const {
    return Possibility_to_checkAnything;
}

void Passenger::setPossibilityToCheckAnything(bool possibilityToCheckAnything) {
    Possibility_to_checkAnything = possibilityToCheckAnything;
}

bool Passenger::isPossibilityToOrderRide() const {
    return Possibility_to_orderRide;
}

void Passenger::setPossibilityToOrderRide(bool possibilityToOrderRide) {
    Possibility_to_orderRide = possibilityToOrderRide;
}

bool Passenger::isPossibilityToChoosePaymentMethod() const {
    return Possibility_to_choosePaymentMethod;
}

void Passenger::setPossibilityToChoosePaymentMethod(bool possibilityToChoosePaymentMethod) {
    Possibility_to_choosePaymentMethod = possibilityToChoosePaymentMethod;
}
