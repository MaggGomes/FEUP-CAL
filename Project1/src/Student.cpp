#include "Student.h"

Student::Student(string name, int ID, const string &localization){
	this->name = name;
	this->ID = ID;
	this->localization = localization;
}

void Student::setName(string name){
	this->name = name;
}

string Student::getName() const{
	return name;
}

void Student::setID(int ID){
	this->ID = ID;
}

int Student::getID() const{
	return ID;
}

void Student::setLocalization(const string &localization){
	this->localization = localization;
}

string Student::getLocalization() const{
	return localization;
}

bool Student::operator==(const Student s) const{
	if (this->name == s.getName() && this->ID == s.getID())
		return true;
	else
		return false;
}

ostream& operator<<(ostream& os, const Student& student){
	os << "> Name: ";
	/*os << student.getName();
	os << " :::: ";
	os << "ID: ";
	os << student.getID();
	os << endl;*/

	return os;
}
