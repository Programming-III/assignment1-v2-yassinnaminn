#ifndef Instructor_H
#define Instructor_H
#include "Person.h"
#include <string>
class Instructor: public Person
{
private:
	std::string name;
	int experienceYears;
public:
	Instructor();
	Instructor(std::string name, int experienceYears);
	~Instructor();
	void display();
};
#endif
