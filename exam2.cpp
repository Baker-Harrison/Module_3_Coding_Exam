#include <iostream>
#include "include/Movie.h"
#include "include/Itinerary.h"

void testPersonMovie();
void testItineraryCity();

int main() {
	cout << "Person Movie Test: " << endl << endl;

	testPersonMovie();

	cout << endl;

	cout << "Itinerary City Test" << endl << endl;

	testItineraryCity();
	cout << "------------------------------" << endl;
	return 0;
}

void testPersonMovie()
{
	string name1 =  "Titanic";
	Person director1 ("John", "Smith", "12/5/1992" );
	vector<Person> cast1 = {{"Jimmy", "Smith", "6/5/2005" },{"James", "Gafford", "6/5/2000" }};

	Movie movie1 (name1, director1, cast1, 90);

	string name2 =  "Random Movie";
	Person director2 ("Jimmy", "Smith", "1/3/1969" );
	vector<Person> cast2 = {{"Jimmy", "Smith", "12/9/1985" },{"James", "Gafford", "6/5/2000" }};

	Movie movie2 (name2, director2, cast2, 250);



	cout << movie1 << endl << endl;
	cout << movie2 << endl << endl;
}

void testItineraryCity()
{

	Itinerary itinerary1;
	City city1 ("Chicago", 29.49949, 12.49494);
	City city2 ("New York", 14.49949, 7.49494);

	itinerary1.addCity(city1);
	itinerary1.addCity(city2);


	Itinerary itinerary2;
	City city3 ("New Orleans", 1.49949, 10.49494);
	City city4 ("San Fransisco", 19.43443, 4.49494);


	itinerary2.addCity(city3);
	itinerary2.addCity(city4);

	Itinerary itinerary3;

	itinerary3 + itinerary1 + itinerary2;

	cout << "Total distance: " << itinerary3.getDistance() << endl;

}
