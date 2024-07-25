//
// Created by Harrison Baker on 7/25/24.
//

#ifndef MODULE_3_CODING_EXAM_PERSON_H
#define MODULE_3_CODING_EXAM_PERSON_H

#include <iostream>

using namespace  std;

class Person
{
private:
string first_name;
string last_name;
string dateOfBirth;
public:
	Person();
	Person(string firstName, string lastName, string DateOfBirth);

	string getFirstName() const;

	 string getLastName() const;

	 string getDateOfBirth() const;

};

#endif //MODULE_3_CODING_EXAM_PERSON_H
