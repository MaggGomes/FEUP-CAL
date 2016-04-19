#include "School.h"

School::School(){};

 School::School(string localization){
	this->localization = localization;
};

void School::addStudent(const Student &student){
	this->students.push_back(student);
}

vector <Student> School::getStudents() const{
	return students;
}

int School::getNumStudents() const{
	return students.size();
}
