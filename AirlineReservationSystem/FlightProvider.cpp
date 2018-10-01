#include "pch.h"
#include "FlightProvider.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

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
	Flight* sea = new Flight(1, "       SEA,WA  ", "    ORD,IL  ", "     3:00PM", "    5:00PM         ",200);
	Flight* ord = new Flight(2, "       ORD,IL  ", "    SEA,WA  ", "     3:00PM", "    5:00PM         ",200);
	Flight* lax = new Flight(3, "       LAX,WA  ", "    SEA,WA  ", "     3:00PM", "    5:00PM         ",200);
	Flight* iah = new Flight(4, "       IAH,TX  ", "    SEA,WA  ", "     3:00PM", "    5:00PM         ",200);
	Flight* jfk = new Flight(5, "       JFG,NY  ", "    SEA,WA  ", "     3:00PM", "    5:00PM         ",200);
	Flight* stl = new Flight(6, "       STL,MO  ", "    SEA,WA  ", "     3:00PM", "    5:00PM         ",200);


	std::vector<Flight*> FlightDetail = { sea, ord, lax, iah, jfk, stl };

	return FlightDetail;
}
