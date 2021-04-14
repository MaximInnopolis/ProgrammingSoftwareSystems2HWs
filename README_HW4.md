# Programming-Software-Systems-2-Introduction-to-Programming-2-

## How to run the code

 CLion was used as the IDE for this project. If you have it, you will be able to open this project through it.
 
### All code example that is shown below must be written in function main.
 
 So, first you want to create a system, database, passenger gateway, driver gateway, drivers, and passengers:
 
  System system1;
  PassengerGateWay passengerGateWay;
  DriverGateWay driverGateWay;
  DataBase dataBase;
  DataBase* ptrDatabase = &dataBase;
  
As you may see I created a pointer to database in order to use vectors in this class  
    
After that people can be loginned like this:
  
    passengerGateWay.passengerLogIn({"Maxim"});
    driverGateWay.driverLogIn({"Leonid"});
    
All users can try to open some room. If you want user to try to open some room you can write like this:

    Innopolis.getUser("Maxim")->tryOpenRoom(Innopolis.getRoom(401));
    Innopolis.getUser("Tormasov")->tryOpenRoom(Innopolis.getRoom(401));
    
If you want to use method that is special for him you should write like it is shown below like this: 

    passengerGateWay.getPassenger({"Maxim"})->selectAddressFrom();
    passengerGateWay.getPassenger({"Maxim"})->selectAddressTo();
    passengerGateWay.getPassenger({"Maxim"})->selectCarType();
    passengerGateWay.getPassenger({"Maxim"})->checkTime();
    passengerGateWay.getPassenger({"Maxim"})->checkPrice();
    passengerGateWay.getPassenger({"Maxim"})->checkLength();
    passengerGateWay.getPassenger({"Maxim"})->orderRide(ptrDatabase);
    passengerGateWay.getPassenger({"Maxim"})->addPaymentMethod("Cache");
    passengerGateWay.getPassenger({"Maxim"})->addPaymentMethod("Card");
    passengerGateWay.getPassenger({"Maxim"})->addPinnedAddresses("Universitetskay");
    passengerGateWay.getPassenger({"Maxim"})->addPinnedAddresses("Ploshad");

I tried to show every method that was required so it should not be complicated

Below you can see my UML diagram


![image](https://user-images.githubusercontent.com/71584246/114623509-09f68b00-9cb8-11eb-99dd-f5f25fedc192.png)

