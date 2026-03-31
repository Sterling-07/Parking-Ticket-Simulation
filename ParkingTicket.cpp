
#include "ParkingTicket.h"
#include <iostream>
using namespace std;

ParkingTicket::ParkingTicket(string mk, string mdl, string clr, string lcn, int min, int minBought, string nm, string bdg) :
	make(mk), model(mdl), color(clr), license(lcn), minutes(min), minutesBought(minBought), name(nm), badge(bdg)
{
	calcFine();
}

void ParkingTicket::calcFine() 
{
	if (minutes <= minutesBought)
	{
		parkingFine = 0;
		return;
	}
	else
	{
		int time = minutes - minutesBought;
		int hours = time / 60;
		if (time % 60 != 0)
		{
			hours++;
		}
		parkingFine = 25 + (hours - 1) * 10;
	}
}

void ParkingTicket::print() const
{
	cout << "Car Make: " << make << endl;
	cout << "Car Model: " << model << endl;
	cout << "Car Color: " << color << endl;
	cout << "License Plate: " << license << endl;
	cout << "Minutes Parked: " << minutes << endl;
	cout << "Minutes Purchased " << minutesBought << endl;

	if (parkingFine > 0)
	{
		cout << "Fine Amount: $" << parkingFine << endl;
	}
	else
	{
		cout << "There was no violation for this vehicle.\n";
	}

	cout << "Officer: " << name << endl;
	cout << "Badge: " << badge << endl;
}
