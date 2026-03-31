// Parking Ticket Simulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;

int main()
{
	ParkedCar car("Honda", "Civic", "Silver", "123456", 100);
	PoliceOfficer officer("John Doe", "58021");

	ParkingTicket* Ticket = officer.check(car, meter);

	return 0;
}