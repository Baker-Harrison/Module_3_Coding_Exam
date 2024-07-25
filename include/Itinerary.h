//
// Created by Harrison Baker on 7/25/24.
//

#ifndef MODULE_3_CODING_EXAM_ITINERARY_H
#define MODULE_3_CODING_EXAM_ITINERARY_H

#include "City.h"

class Itinerary
{
private:
	vector<City> cities;
public:
	vector<City> getCities();
	void addCity(City city);

	static double getDistance(City current, City destination);
	double getDistance();

	Itinerary operator+(Itinerary &right);
};

#endif //MODULE_3_CODING_EXAM_ITINERARY_H
