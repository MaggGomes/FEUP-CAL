#ifndef BUS_H
#define BUS_H

#include <string>
#include <vector>

#include "School.h"

using namespace std;

class Student;

class Bus {
	int ID;
	static int lastID;
	School * school;
	int buildYear;
	string registration;
	int capacity;
	vector<Student> students;
public:
	Bus(int buildYear, string registration, int capacity);
	void setBuildYear(int year);
	int getBuildYear() const;
	void setRegistration(string registration);
	string getRegistration() const;
	void setCapacity(int capacity);
	int getCapacity() const;
	void setSchool(School * school);
	School *  getSchool() const;
	void addStudent(const Student &student);
	vector<Student> getStudents() const;
	void setID(int ID);
	int getID() const;
	bool operator==(const Bus bus) const;
	friend ostream& operator<<(ostream& os, const Bus& bus);
};

#endif // BUS_H
