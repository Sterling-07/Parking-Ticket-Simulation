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
	ParkingMeter meter(60);
	PoliceOfficer officer("John Doe", "58021");

	ParkingTicket* ticket = officer.check(car, meter);
	if (ticket != nullptr)
	{
		(*ticket).print();

	}
	else
	{
		cout << "There was no violation for this vehicle.\n";
	}

	return 0;
}