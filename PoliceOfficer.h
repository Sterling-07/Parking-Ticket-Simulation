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
	PoliceOfficer(string nm, string bdg);

	ParkingTicket* check(const ParkedCar& car, const ParkingMeter& meter) const;
	
};