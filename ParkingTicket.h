#pragma once

#include <iostream>
#include <string>
using namespace std;

class ParkingTicket
{
private:
	string make, model, color, license;
	int minutes, minutesBought;
	double parkingFine = 0.0;
	string name, badge;

	void calcFine();

public:
	ParkingTicket(string mk, string mdl, string clr, string lcn, int min, int minBought, string nm, string bdg);
	
	void print() const;
	
};