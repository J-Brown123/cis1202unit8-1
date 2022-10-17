#include <iostream>
#include "Vehicle.h"
void Vehicle::displayInfo()
{
	cout << "The vehicle year is: " << year << endl;
	cout << "The vehicle manufacturer is: " << manufacturer << endl;
	return;
}

void Vehicle::setYear()
{
	cout << "What is the year of the vehicle?";
	cin >> year;
	return;
}

void Vehicle::setManufacturer()
{
	cout << "What is the manufacturer of the vehicle?";
	getline(cin, manufacturer);
	return;
}