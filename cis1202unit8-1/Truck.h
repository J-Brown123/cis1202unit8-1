#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle
{
private:
	int tow;
public:
	Truck()
	{
		tow = 0;
	}
	void setTow();
	int getTow()
	{
		return tow;
	}
};

#endif
