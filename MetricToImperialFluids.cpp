/*
Program: Assignment1-Problem2-kez27
Author: Kassandra Zimmerman
Purpose: This program allocates fluid ounces into various units, starting with the largest and working to the smallest.
Last Modified: 4/23/2015
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int fluidOunces, fluidOuncesRemaining, hogsheads, gallons, quarts, pints, cups, gills, teaspoons;
	const int OUNCES_IN_A_HOGSHEAD = 8064, OUNCES_IN_A_GALLON = 128,
		OUNCES_IN_A_QUART = 32, OUNCES_IN_A_PINT = 16, OUNCES_IN_A_CUP = 8,
		OUNCES_IN_A_GILL = 4;
	const double OUNCES_IN_A_TEASPOON = 1.0 / 6;


	//The following loop ensures that a reasonable answer is given.
	do
	{
		cout << "How many fluid ounces do you have?";
		cin >> fluidOunces;
	} while (fluidOunces < 0); //It's not possible to have a negative amount of fluid ounces.

	hogsheads = fluidOunces / OUNCES_IN_A_HOGSHEAD;
	fluidOuncesRemaining = fluidOunces % OUNCES_IN_A_HOGSHEAD;

	gallons = fluidOuncesRemaining / OUNCES_IN_A_GALLON;
	fluidOuncesRemaining = fluidOuncesRemaining % OUNCES_IN_A_GALLON;

	quarts = fluidOuncesRemaining / OUNCES_IN_A_QUART;
	fluidOuncesRemaining = fluidOuncesRemaining % OUNCES_IN_A_QUART;

	pints = fluidOuncesRemaining / OUNCES_IN_A_PINT;
	fluidOuncesRemaining = fluidOuncesRemaining % OUNCES_IN_A_PINT;

	cups = fluidOuncesRemaining / OUNCES_IN_A_CUP;
	fluidOuncesRemaining = fluidOuncesRemaining % OUNCES_IN_A_CUP;

	gills = fluidOuncesRemaining / OUNCES_IN_A_GILL;
	fluidOuncesRemaining = fluidOuncesRemaining % OUNCES_IN_A_GILL;

	teaspoons = fluidOuncesRemaining / OUNCES_IN_A_TEASPOON;

	cout << "You have entered:" << fluidOunces << endl << "You have " << endl
		<< hogsheads << " hogsheads(s)" << endl
		<< gallons << " gallons(s)" << endl
		<< quarts << " quart(s)" << endl
		<< pints << " pint(s)" << endl
		<< cups << " cup(s)" << endl
		<< gills << " gill(s)" << endl
		<< teaspoons << " teaspoon(s)";

	return 0;

}
