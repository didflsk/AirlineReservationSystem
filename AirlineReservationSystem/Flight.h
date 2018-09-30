#pragma once
#include <string>


class Flight {
public: 
	Flight(int flightNumber, std::string departureLocation, std::string arrivalLocation, std::string departureTime, std::string arrivalTime, double fare); 
	void print();
	int getFlightNumber();
private:
	int flightNumber;
	std::string departureLocation;
	std::string arrivalLocation;
	std::string departureTime;
	std::string arrivaltime;
	double fare; 

};