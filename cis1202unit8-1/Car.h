#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	int doors;
public:
	Car()
	{doors = 0;}
	void setDoors();
	int getDoors()
	{return doors;}
	void displayInfo();
};

#endif
