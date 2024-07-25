//
// Created by Harrison Baker on 7/25/24.
//

#ifndef MODULE_3_CODING_EXAM_MOVIE_H
#define MODULE_3_CODING_EXAM_MOVIE_H

#include "Person.h"

class Movie
{
private:
	string name;
	Person director;
	vector<Person> cast;
	int runTime;
public:
	static bool isLongMovie();
	Movie();
	Movie(string Name, Person Director,vector<Person> Cast,  int RunTime );


	friend ostream &operator<<(ostream &strm, const Movie obj);

	string getName() const;
	Person getDirector() const;
	vector<Person>getCast() const;
	int getRunTime() const;
	static bool isLongMovie(int min);


};


#endif //MODULE_3_CODING_EXAM_MOVIE_H
