#pragma once

#include <iostream>
using namespace std;

class ParkingMeter
{
private:
	int minutesBought;

public:
	ParkingMeter(int minBought) : minutesBought(minBought) {}

	int getMinutesBought()const
	{
		return minutesBought;
	}

};