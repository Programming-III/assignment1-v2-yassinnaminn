#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Person(){
	std::string name = "";
	int id = 0;
}
Person(std::string name, int id) {
	this->name = name;
	this->id = id;
}
~Person() {

}
void display() {
	cout << name << endl;
	cout << id << endl;
}

// ==================== Student Class Implementation ====================
Student() {

}
Student(int yearLevel, std::string major) {
	this->yearLevel = yearLevel;
	this->major = major;
}
~Student() {

}
void display() {
	cout << yearLevel << endl;
	cout << major << endl;
}

// ==================== Instructor Class Implementation ====================
Instructor() {

}
Instructor(std::string name, int experienceYears) {
	this->name = name;
	this->experienceYears = experienceYears;
}
~Instructor() {

}
void display() {
	cout << name << endl;
	cout << experienceYears << endl;
}

// ==================== Course Class Implementation ====================

Course() {

}
Course(std::string courseCode, std::string courseName, int maxStudents, Student* student, int currentStudents) {
	this->courseCode = courseCode;
	this->courseName = courseName;
	this->maxStudents = maxStudents;
	this->student = student;
	this->currentStudents = currentStudents;
}
~Course() {

}
void addStudent(const Student& s) {
	Course prog = new Student();

}
void displayCourseInfo() {
	cout<< courseCode <<endl;
	cout<< courseName <<endl;
	cout<< maxStudents <<endl;
	cout<< student <<endl;
	cout<< currentStudents <<endl;

}
   

// ==================== Main Function ====================
int main() {
Student p1* = new Student();
Instructor p2* = new Instructor();
Course c1* = new Course();
p1.display();
p2.display();
c1.displayCourseInfo();
c1.addStduent();
   

    
    return 0;
}
