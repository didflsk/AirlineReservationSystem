#include "pch.h"
#include "Passenger.h"
#include <iostream>

using namespace std; 

Passenger::Passenger(std::string name)
{
	this->name = name; 
}


Passenger::~Passenger()
{
}

void Passenger::setFlight(Flight* flight)
{
	this->flight = flight; 
}

void Passenger::setSeatNumber(std::string seatNumber)
{
	this->seatNumber = seatNumber; 
}

void Passenger::setConfirmationNumber(int confirmationnumber)
{
	this->mConfirmationNumber = confirmationnumber;
}

void Passenger::print()
{
	cout << " Passenger Name: " << this->name << endl << " Passenger Seat: " << this->seatNumber << endl << " Passenger Confiramtion Number " <<this ->mConfirmationNumber<<" " << endl;
	flight->print();

}



string Passenger::getName()
{
	return name;
}


