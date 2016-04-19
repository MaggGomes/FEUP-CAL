#include "BusStop.h"

BusStop::BusStop(){
	this->ID = 0;
};

BusStop::BusStop(int ID, string name, string localization){
	this->ID = ID;
	this->name = name;
	this->localization = localization;
}

void BusStop::setID(int ID){
	this->ID = ID;
}

int BusStop::getID() const{
	return ID;
}

void BusStop::setName(string name){
	this->name = name;
}

string BusStop::getName() const{
	return name;
}
void BusStop::setLocalization(string localization){
	this->localization = localization;
}
string BusStop::getLocalization() const{
	return localization;
}
