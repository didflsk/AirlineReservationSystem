// AirlineReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "FlightProvider.h"
#include <string>
#include "Passenger.h"
#include<iomanip>

using namespace std; 

FlightProvider flightProvider = FlightProvider();
std::vector<Flight*> flightdetails = flightProvider.GetFlights();
std::vector<Passenger*> passengers = {};



void displayFlightInfo() {
	std::cout << "Flight Information" << endl;
	std::cout <<"Flight No" << setw(10)<<" Departure" << setw(10)<<" Arrival " << setw(10)<<" Departure Time" <<setw(10) << " Arrival Time" << setw(10)<< " Fare" << endl;
	

	for (unsigned i = 0; i < flightdetails.size(); i++) {
		flightdetails.at(i)->print();
	}
}
int KconfirmationNumber = 1000;
void bookFlight() {
	std::cout << std::left;
	std::cout <<
		setw(20) << "[Flight Number]" << setw(15) << "[Departure]" << setw(15) << "[Arrival]" << setw(15) << "[FareCost]" << '\n' <<
		setw(20) << "Flight No1" << setw(15) << "SEA,WA" << setw(15) << "ORD,IL" << setw(15) << "$200" << '\n' <<
		setw(20) << "Flight No2" << setw(15) << "ORD,IL" << setw(15) << "SEA,WA" << setw(15) << "$200" << '\n' <<
		setw(20) << "Flight No3" << setw(15) << "LAX,CA" << setw(15) << "SEA,WA" << setw(15) << "$200" << '\n' <<
		setw(20) << "Flight No4" << setw(15) << "IAH,TX" << setw(15) << "SEA,WA" << setw(15) << "$200" << '\n' <<
		setw(20) << "Flight No5" << setw(15) << "JFK,NY" << setw(15) << "SEA,WA" << setw(15) << "$200" << '\n' <<
		setw(20) << "Flight No6" << setw(15) << "STL,MI" << setw(15) << "SEA,WA" << setw(15) << "$200" << '\n';

	cout << "------------------------------------------" << endl;
	cout << "                         " << endl;
	cout << "------------------------------------------" << endl;
	cout << "Name?" << endl;
	string name;
	cin >> name;

	Passenger* passenger = new Passenger(name);

	cout << "Flight Number?" << endl;
	int flightNumber;
	cin >> flightNumber;

	for (unsigned i = 0; i < flightdetails.size(); i++) {
		Flight* currentFlight = flightdetails.at(i);
		if (currentFlight->getFlightNumber() == flightNumber) {
			passenger->setFlight(currentFlight);
		}
	}

	cout << "Seat Number?" << endl;
	string seatNumber;
	cin >> seatNumber;

	passenger->setSeatNumber(seatNumber);

	passenger->setConfirmationNumber(KconfirmationNumber++);

	passengers.push_back(passenger);

	cout << "***Your reservation is confirmed***" << endl;
	cout << "Confirmation Number is : "  <<--KconfirmationNumber<< endl;
	KconfirmationNumber++;
}

void displayPassengerInfo() {
	string name; 
	cout << "Passenger Name?" << endl;
	cin >> name; 

	for (unsigned i = 0; i < passengers.size(); i++) {
		if (passengers.at(i)->getName() == name) {
			
			passengers.at(i)->print(); 
	
		}
	}
}
void displayFlightDetails() {
	int confirmationNumber;
	cout << "Confirmation Number?" << endl;
	cin >> confirmationNumber;

	for (unsigned i = 0; i < passengers.size(); i++) {
		if (passengers.at(i)->getConfirmationNumber() == confirmationNumber) {
			passengers.at(i)->print();
		}
	}
}

int main()
{
	bool shouldRun = true; 
	while (shouldRun) 
	{
		cout << endl;
		cout << "Welcome to Airline Reservation Database" << endl;
		cout << "------------------------------------------" << endl;
		cout << "------------------------------------------" << endl;
		cout << "                              " << endl;
		cout << " ----Please select from option below:----" << endl;
		cout << "                              " << endl;

		cout << "1. View Flight Schedule " << endl;
		cout << "2. Reserve a Seat" << endl;
		cout << "3. Display Passenger Info" << endl;
		cout << "4. Display Flight Details" << endl;	
		cout << "5. Exit Program" << endl;
		cout << "------------------------------------------" << endl;
		cout << "------------------------------------------" << endl;
		cout << "" << endl;


		int userSelection;
		cin >> userSelection;

		if (userSelection == 1) {
			displayFlightInfo();
		}

		if (userSelection == 2) {
			bookFlight();

		}

		if (userSelection == 3) {
			displayPassengerInfo();
		}

		if (userSelection == 4) {
			displayFlightDetails();
		}


		if (userSelection == 5) {
			shouldRun = false; 
		}
	}

	for (unsigned i = 0; i < flightdetails.size(); i++)
	{
		delete flightdetails.at(i);
		flightdetails.at(i) = nullptr;
	}

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
