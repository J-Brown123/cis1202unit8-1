#include "Truck.h"
#include <iostream>

void Truck::setTow()
{
	cout << "What is the truck's towing capacity?\n";
	cin >> tow;
	return;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "The truck's towing capacity is " << tow << " pounds.\n";
	return;
}
