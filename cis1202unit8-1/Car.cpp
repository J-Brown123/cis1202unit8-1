#include "Car.h"
#include <iostream>

void Car::setDoors()
{
	cout << "How many doors does the car have?\n";
	cin >> doors;
	return;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "This car has " << doors << " doors.\n";
	return;
}
