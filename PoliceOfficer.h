#pragma once

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
using namespace std;

class PoliceOfficer
{
private:
	string name, badge;

public:
	PoliceOfficer(string nm, string bdg) : name(nm), badge(bdg) {}

	ParkingTicket* check(const ParkedCar& car, const ParkingMeter& park) const
	{
		if (car.findMinutes() > park.getMinutesBought())
		{
			return new ParkingTicket
			car.findMake(), car.findModel(), car.findColor(), car.findLicense(),
			car.findMinutes(), park.getMinutesBought();
		}
	}

};