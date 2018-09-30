#pragma once
#include "Flight.h"
#include <vector>


class FlightProvider
{
public:
	FlightProvider();
	~FlightProvider();
	
	std::vector<Flight*> GetFlights();
};

