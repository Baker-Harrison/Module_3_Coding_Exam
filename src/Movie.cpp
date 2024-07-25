//
// Created by Harrison Baker on 7/25/24.
//
#include "../include/Movie.h"
Movie::Movie()
{}

Movie::Movie(string Name, Person Director,vector<Person> Cast,  int RunTime )
{
	this->name = Name;
	this->director = Director;
	this->cast = Cast;
	runTime = RunTime;
}



ostream &operator<<(ostream &strm, const Movie obj) {
	static int RunTime = obj.getRunTime();
	strm << "Movie Name: " << obj.getName() << endl
			<< "Director: " << obj.getDirector().getFirstName() << ' ' << obj.getDirector().getLastName() << endl;
			int counter = 1;
			for (Person person : obj.getCast())
			{
				strm << "Cast member " << counter << ": " <<  person.getFirstName() << ' ' << person.getLastName() << endl;
				counter++;
			}
			strm << "runTime: " << obj.getRunTime() << " minutes" << endl
			<< "is a long movie: " << ((Movie::isLongMovie(RunTime)) ? "Yes" : "No");
	return strm;

}

string Movie::getName() const
{
	return name;
}

Person Movie::getDirector() const
{
	return director;
}

vector<Person> Movie::getCast() const
{
	return cast;
}



int Movie::getRunTime() const {
	return runTime;
}


bool Movie::isLongMovie(int min)
{
	if (min > 135)
	{
		return true;
	}
	return false;
}