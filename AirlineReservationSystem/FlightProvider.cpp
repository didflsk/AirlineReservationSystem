#include "pch.h"
#include "FlightProvider.h"
#include <iostream>
#include <fstream>
#include <vector>

FlightProvider::FlightProvider()
{
}


FlightProvider::~FlightProvider()
{
}
// open csv file
//read csv file
//create an array of flights where each flight is a row in the csv file

std::vector<Flight*> FlightProvider::GetFlights()
{
	
	Flight* sea = new Flight(1,"sea", "ord", "3:00", "5:00", 200);
	Flight* ord = new Flight(2, "ord", "sea", "3:00", "5:00", 200);
	Flight* lax = new Flight(3, "lax", "sea", "3:00", "5:00", 200);
	Flight* iah = new Flight(4, "iah", "sea", "3:00", "5:00", 200);
	Flight* jfk = new Flight(5,"jfk", "sea", "3:00", "5:00", 200);
	Flight* stl = new Flight(6, "stl", "sea", "3:00", "5:00", 200);


	std::vector<Flight*> FlightDetail = { sea, ord, lax, iah, jfk, stl };

	return FlightDetail;
}
