#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
{
private: 
	std::string name;
	int id;
public:
	Person();
	Person(std::string name, int id);
	~Person();
	void display();

};
#endif

