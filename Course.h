#ifndef COURSE_H
#define COURSE_H
#include <string>
class Course
{
private:
	std::string courseCode;
	std::string courseName;
	int maxStudents;
	Student* student;
	int currentStudents;
public:
	Course();
	Course(std::string courseCode, std::string courseName, int maxStudents, Student* student,int currentStudents);
	~Course();
	void addStudent(const Student& s);
	void displayCourseInfo();


};
#endif
