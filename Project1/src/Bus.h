#ifndef BUS_H
#define BUS_H

#include <string>
#include <vector>

#include "School.h"

using namespace std;

class Student;

class Bus {
	int buildYear;
	string registration;
	int capacity;
	School school;
	vector<Student> students;
public:
	Bus(int buildYear, string registration, int capacity);
	void setBuildYear(int year);
	int getBuildYear() const;
	void setRegistration(string registration);
	string getRegistration() const;
	void setCapacity(int capacity);
	int getCapacity() const;
	void setSchool(const School &school);
	School getSchool() const;
	void addStudent(const Student &student);
	vector<Student> getStudents() const;
	bool operator==(const Bus bus) const;
	friend ostream& operator<<(ostream& os, const Bus& bus);
};

#endif // BUS_H
