#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car
{
private:
	string company;
	string model;
public:
	Car();
	Car(string comp, string mod);
	string getCar() const;
};

class PassengerCar : virtual public Car
{
public:
	PassengerCar();
	PassengerCar(string comp, string mod);
};

class Bus : virtual public Car
{
public:
	Bus();
	Bus(string comp, string mod);
};

class Minivan : public PassengerCar, public Bus
{
public:
	Minivan();
	Minivan(string comp, string mod);
};