#ifndef BUS_STOP_H
#define BUS_STOP_H

#include <string>
#include "Localization.h"

using namespace std;

class BusStop {
	int ID;
	string name;
	string localization;
 public:
	BusStop();
	BusStop(int ID, string name, string localization);
	void setID(int ID);
	int getID() const;
	void setName(string name);
	string getName() const;
	void setLocalization(string localization);
	string getLocalization() const;
};

#endif // BUS_STOP_H