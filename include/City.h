//
// Created by Harrison Baker on 7/25/24.
//

#ifndef MODULE_3_CODING_EXAM_CITY_H
#define MODULE_3_CODING_EXAM_CITY_H

#include <iostream>

using namespace std;

class City
{
private:
	string name;
	double longitude;
	double latitude;
public:
	City();
	City(string Name, double Longitude, double Latitude);

	string getName();
	double getLongitude();
	double getLatitude();
};

#endif //MODULE_3_CODING_EXAM_CITY_H
