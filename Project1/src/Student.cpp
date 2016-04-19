#include "Student.h"

Student::Student(string name, int ID, const string &localization){
	this->name = name;
	this->ID = ID;
	this->localization = localization;
}

void Student::setName(string name){
	this->name = name;
}

string Student::getName(){
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
