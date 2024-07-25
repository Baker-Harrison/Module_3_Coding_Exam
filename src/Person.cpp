#include "../include/Person.h"


//
// Created by Harrison Baker on 7/25/24.
//

Person::Person()
{

}

Person::Person(string firstName, string lastName, string DateOfBirth)
{
	this->first_name = firstName;
	this->last_name = lastName;
	this->dateOfBirth = DateOfBirth;
}


string Person::getFirstName() const {
	return first_name;
}

string Person::getLastName() const {
	return last_name;
}

string Person::getDateOfBirth() const {
	return dateOfBirth;
}
