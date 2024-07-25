//
// Created by Harrison Baker on 7/25/24.
//
#include "../include/City.h"

City::City() {

}

City::City(string Name, double Longitude, double Latitude) {
	this->name = Name;
	this->longitude = Longitude;
	this->latitude = Latitude;
}

string City::getName() {
	return name;
}

double City::getLongitude() {
	return longitude;
}

double City::getLatitude() {
	return latitude;
}

