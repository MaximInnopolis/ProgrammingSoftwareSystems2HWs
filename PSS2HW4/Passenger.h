#ifndef PSS2HW4_PASSENGER_H
#define PSS2HW4_PASSENGER_H

#include <string>

using namespace std;

class Passenger{
public:
    Passenger(string _name){name = _name;}
    string getName(){return name;}
    string name;
    int rating;
    void seeOrderHistory();
    void orderRide();
};


#endif //PSS2HW4_PASSENGER_H