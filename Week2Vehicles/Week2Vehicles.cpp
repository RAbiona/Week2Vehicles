// Week2Vehicles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Vehicle {
    

public:
    int speed;
    std::string name;
    
    Vehicle() {
        this->name = "Default";
        this->speed = 0;
    }

    Vehicle(std::string n, int s) {
        this->name = n;
        this->speed = s;
    }

    ~Vehicle() {

    }

    virtual void Drive() {
        std::cout << this->name << " is driving in a generic manner." << std::endl;
   }
};

class Car : public Vehicle {
public:

    Car() {
        this->name = "Honda";
        this->speed = 45;
    }

    Car(std::string n, int s) {
        this->name = n;
        this->speed = s;
    }
    ~Car() {

    }

    void Drive() override {
        std::cout << this->name << " is driving on a road at " << this->speed << " mph." << std::endl;
    }

};

class Boat : public Vehicle {
public:

    Boat() {
        this->name = "Jetski";
        this->speed = 45;
    }

    Boat(std::string n, int s) {
        this->name = n;
        this->speed = s;
    }
    ~Boat() {

    }

    void Drive() override {
        std::cout << this->name << " is crusing over the ocean at " << this->speed << " knots." << std::endl;
    }
};

class Airplane : public Vehicle {
public:

    Airplane() {
        this->name = "Boeing 747";
        this->speed = 2000;
    }

    Airplane(std::string n, int s) {
        this->name = n;
        this->speed = s;
    }
    ~Airplane() {

    }

    void Drive() override {
        std::cout << this->name << " is cruising through the sky at " << this->speed << " mph." << std::endl;
    }
};

int main()
{
    Car* c = new Car();
    Boat* b = new Boat();
    Airplane* a = new Airplane();

    c->Drive();
    b->Drive();
    a->Drive();

}
