#pragma once

#include <iostream>
#include <string>
using namespace std;

class ParkedCar
{
private: 
	string make, model, color, license;
	int minutes;

public:
	ParkedCar(string mk, string mdl, string clr, string lcn, int min) : 
		make(mk), model(mdl), color(clr), license(lcn), minutes(min) {}
	
	string findMake() const
	{
		return make;
	}
	string findModel() const
	{
		return model;
	}
	string findColor() const
	{
		return color;
	}
	string findLicense() const
	{
		return license;
	}
	int findMinutes() const
	{
		return minutes;
	}
};