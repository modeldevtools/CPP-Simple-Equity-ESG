#pragma once
#include "BlackScholes.h"

class PutOption
{
public:
	double strike;
	double expiry;

	//Constructor
	PutOption();

	// Declare member functions
	double payoff(double stockAtMaturity) const;
	double price(const BlackScholes& bsm) const;
};