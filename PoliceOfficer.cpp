
#include <iostream>
#include "PoliceOfficer.h"
using namespace std;

PoliceOfficer::PoliceOfficer(string nm, string bdg) : name(nm), badge(bdg) 

{
}

ParkingTicket* PoliceOfficer::check(const ParkedCar& car, const ParkingMeter& meter) const
{
	if (car.findMinutes() > meter.getMinutesBought())
	{
		return new ParkingTicket
			(car.findMake(),
			car.findModel(),
			car.findColor(),
			car.findLicense(),
			car.findMinutes(),
			meter.getMinutesBought(),
			name, badge);
	}
	return nullptr;
}

