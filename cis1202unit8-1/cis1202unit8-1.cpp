// Jordan Brown 
// CIS 1202.800
// Oct. 17, 2022

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	//Variables and objects
	string manu;
	int year, doors, tow;

	Vehicle veh;
	Car car;
	Truck truck;

	//Testing objects
	veh.setManufacturer();
	veh.setYear();
	veh.displayInfo();
	cin.ignore();
	cout << endl;
	car.setManufacturer();
	car.setYear();
	car.setDoors();
	car.displayInfo();
	cin.ignore();
	cout << endl;
	truck.setManufacturer();
	truck.setYear();
	truck.setTow();
	truck.displayInfo();

	return 0;
}