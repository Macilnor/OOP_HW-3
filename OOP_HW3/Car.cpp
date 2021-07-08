#include "Car.h"

Car::Car() : company("noname"), model("nomodel")
{
	cout << getCar() << " car constructed." << endl;
}

Car::Car(string comp, string mod) : company(comp), model(mod)
{
	cout << getCar() << " car constructed." << endl;
}

string Car::getCar() const
{
	return company + " " + model;
}

PassengerCar::PassengerCar() : Car("SomeCompany", "PassengerCarRX6")
{
	cout << getCar() << " passanger car constructed." << endl;
}

PassengerCar::PassengerCar(string comp, string mod) : Car(comp, mod)
{
	cout << getCar() << " passanger car constructed." << endl;
}

Bus::Bus() : Car("SomeCompany", "anonimBus1200")
{
	cout << getCar() << " bus constructed." << endl;
}

Bus::Bus(string comp, string mod) : Car(comp, mod)
{
	cout << getCar() << " bus constructed." << endl;
}

Minivan::Minivan() : Car("SomeCompany", "SomeVan3000")
{
	cout << getCar() << " minivan constructed." << endl;
}

Minivan::Minivan(string comp, string mod) : Car(comp, mod)
{
	cout << getCar() << " minivan constructed." << endl;
}
