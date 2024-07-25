//
// Created by Harrison Baker on 7/25/24.
//

#include "../include/Itinerary.h"
#include <cmath>

vector<City> Itinerary::getCities() {
	return cities;
}

void Itinerary::addCity(City city) {
	cities.push_back(city);
}

double Itinerary::getDistance(City current, City destination) {
	double distance;
	distance = sqrt( pow(current.getLatitude() - destination.getLatitude(), 2) + pow(current.getLongitude() - destination.getLongitude(), 2) );
	return distance;
}

double Itinerary::getDistance() {
	double totalDistance = 0;

	for (int i = 0; i < cities.size() - 1; i++)
	{
		totalDistance += Itinerary::getDistance(cities[i], cities[i + 1]);
	}
	return totalDistance;
}

Itinerary Itinerary::operator+(Itinerary &right)
{
	Itinerary newItinerary;

	for (City city : right.getCities())
	{
		this->addCity(city);
	}

	for (City city : this->getCities())
	{
		newItinerary.addCity(city);
	}

	return newItinerary;
}

