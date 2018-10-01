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
	void setConfirmationNumber(int confirmationNumber);
	int getConfirmationNumber() const;
	void print(); 
	std::string getName();
private:
	std::string name;
	Flight* flight;
	std::string seatNumber;
	int mConfirmationNumber = -1;

};

