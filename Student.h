#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
class Student : public Person
{
private:
	int yearLevel;
	std::string major;
public:
	Student();
	Student(int yearLevel, std::string major);
	~Student();
	void display();
};
#endif
