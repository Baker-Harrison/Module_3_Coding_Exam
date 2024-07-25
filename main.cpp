#include <iostream>
#include "include/Movie.h"

int main() {
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


	return 0;
}
