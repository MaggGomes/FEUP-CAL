#ifndef STUDENT_H
#define STUDENT_H

#include "BusStop.h"

using namespace std;

class Student {
	string name;
	int ID;
	BusStop busStop;

public:
	Student(string name, int ID, const BusStop &busStop);
	void setName(string name);
	string getName();
	void setID(int ID);
	int getID() const;
	void setBusStop(const BusStop &busStop);
	BusStop getBusStop() const;
};

#endif // STUDENT_H
