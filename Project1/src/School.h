#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class School {
	vector <Student> students;
	string localization;

public:
	School();
	School(string localization);
	void addStudent(const Student &student);
	vector <Student> getStudents() const;
	int getNumStudents() const;
};
