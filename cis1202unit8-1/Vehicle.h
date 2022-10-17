#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
private:
	int year;
	string manufacturer;
public:
	Vehicle()
	{
		year = 0;
		manufacturer = " ";
	}
	void displayInfo();
	int getYear()
	{return year;}
	string getManufacturer()
	{return manufacturer;}
	void setYear();
	void setManufacturer();
};

#endif

