#pragma once

#include <iostream>
#include <string>
using namespace std;

class ParkingTicket
{
private:
	string make, model, color, license;
	int minutes, minutesBought;
	double parkingFine;
	string name, badge;

public:
	ParkingTicket(string mk, string mdl, string clr, string lcn, int min, int minBought, string nm, string bdg) :
		make(mk), model(mdl), color(clr), license(lcn), minutes(min), minutesBought(minBought), name(nm), badge(bdg)
	{

	}

	

	void print()
	{
		cout << "Car Make: " << make << endl;
		cout << "Car Model: " << model << endl;
		cout << "Car Color: " << color << endl;
		cout << "License Plate: " << license << endl;
		cout << "Minutes Parked: " << minutes << endl;
		cout << "Minutes Purchased " << minutesBought << endl;

		cout << "Officer: " << name << ", " << badge << endl;
	}

};