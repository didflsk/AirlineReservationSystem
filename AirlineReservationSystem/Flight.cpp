#include "pch.h"
#include "Flight.h"
#include <iostream>

using namespace std;

Flight::Flight(int flightNumber, std::string departureLocation, std::string arrivalLocation, std::string departureTime, std::string arrivalTime, double fare)
{
	this->flightNumber = flightNumber;
	this->departureLocation = departureLocation;
	this->arrivalLocation = arrivalLocation;
	this->departureTime = departureTime;
	this->arrivaltime = arrivalTime;
	this->fare = fare;

}

void Flight::print()
{
	cout << this->flightNumber << " " << this->departureLocation << " " << this->arrivalLocation << " " << this->departureTime << " " << this->arrivaltime << " " << this->fare << endl; 
}

int Flight::getFlightNumber()
{
	return flightNumber;
}

