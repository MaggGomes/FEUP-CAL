#ifndef SCHOOLBUS_H
#define SCHOOLBUS_H

#include "Graph.h"
#include "Bus.h"
#include "Utilities.h"
#include "Graphviewer.h"
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <fstream>

class SchoolBus {
	GraphViewer *gv;
	Graph <int> routesGraph;
	vector <Bus> bus;
	vector <School *> schools;
	int nodeID = 0; // TODO - ALTERAR PARA O VALOR A USAR
public:
	SchoolBus();
	SchoolBus(const Graph<int> &graph);
	void addBus(const Bus &bus);
	vector <Bus> getBus() const;
	void addSchool(School * school);
	vector <School *> getSchools() const;
	Graph <int> getRoutesGraph() const;
	vector<Vertex<int>*> getInttoVertex(vector <int> &vec);
	void showGraph(int srcNode, int destNod);
	void generateRoute(int srcNode, int destNod, vector<int> stops);
	void saveBus();
	void saveSchools();
	void saveStudents();
	void saveData();
	void loadBus();
	void loadSchools();
	void loadStudents();
	void loadData();
	void menuShowBus();
	void menuShowSchools();
	void menuShowStudents();
	void menuStarting();
	void searchSchoolID(int schoolID);
	void searchSchoolName(string busReg);
	void menuSearchSchool();
	bool validSchoolName(const string &name);
	string registerSchoolName();
	bool validNodeID(int nodeID);
	int registerSchoolNodeID();
	void registerNewSchool();
	void menuSchoolManagement();
	void menuClientManagement();
	void searchBusID(int busID);
	void searchBusReg(string busReg);
	void menuSearchBus();
	int registerBusYear();
	bool validRegistration(const string &reg);
	string registerBusRegistration();
	int registerBusCapacity();
	bool validBusSchoolID(int id);
	int registerBusSchool();
	void registerNewBus();
	string registerStudentName();
	int registerStudentSchool();
	bool validBus(int stuBus, int schoolID);
	int resgisterStudentBus(int schoolID);
	int registerStudentNode();
	void registerNewClient();
	void menuBusManagement();
};

#endif // SCHOOLBUS_H
