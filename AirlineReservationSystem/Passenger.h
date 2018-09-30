#pragma once
#include <string>
#include "Flight.h"
class Passenger
{
public:
	Passenger(std::string name);
	~Passenger();
	void setFlight(Flight* flight); 
	void setSeatNumber(std::string seatNumber); 
	void print(); 
	std::string getName();
private:
	std::string name;
	Flight* flight;
	std::string seatNumber; 

};

