#include "SchoolBus.h"

using namespace std;

SchoolBus::SchoolBus(){};

SchoolBus::SchoolBus(const Graph<int> &graph){
	this->routesGraph = graph;
}

void SchoolBus::addBus(const Bus &bus){
	this->bus.push_back(bus);
}

vector <Bus> SchoolBus::getBus() const{
	return bus;
}

void SchoolBus::addSchool(const School &school){
	this->schools.push_back(school);
}

vector <School> SchoolBus::getSchool() const{
	return schools;
}

void SchoolBus::addStudent(string name, int ID, const string &localization, School &school){

	for (unsigned int i = 0; i < schools.size(); i++){
		if (schools[i] == school){
			schools[i].addStudent(Student (name, ID, localization));
			break;
		}
	}
}

Graph <int> SchoolBus::getRoutesGraph() const{
	return routesGraph;
}

// TODO - alterar para showGraph(int source, int destiny) para assim dar para qualquer grafo
void SchoolBus::showGraph(unsigned int srcNode, unsigned int destNode){
	unsigned int width = 800;
	unsigned int height = 600;

	routesGraph.dijkstraShortestPath(srcNode);
	gv = new GraphViewer(width, height, true);
	gv->createWindow(width, height);
	gv->defineVertexColor("blue");
	gv->defineEdgeCurved(false);

	// Get network of nodes
	vector<Vertex<int>*> routes = routesGraph.getVertexSet();

	// Create the nodes
	for (unsigned int i = 0; i < routes.size(); i++){
		gv->addNode(i);
		gv->setVertexSize(i, 5);
		routes[i]->gvNodeID = i;
	}

	// Create the edges
	unsigned int counter = 0;
	for (unsigned int i = 0; i < routes.size(); i++){
		for (int unsigned j = 0; j < routes[i]->adj.size(); j++){
			gv->addEdge(counter++, routes[i]->gvNodeID,
					routes[i]->adj[j].getDest()->gvNodeID,
					EdgeType::UNDIRECTED);

			routes[i]->adj[j].setGvEdgeID(counter);
			gv->setEdgeWeight(counter-1, routes[i]->adj[j].getWeigth());
		}
	}

	unsigned int i  = destNode;
	while (routes[i]->path != NULL){
		cout << i << endl;
		for (int unsigned j = 0; j < routes[i]->path->adj.size(); j++){
			if (routes[i]->path->adj[j].getDest()->getInfo() == routes[i]->getInfo()){
				gv->removeEdge(routes[i]->path->adj[j].getGvEdgeID());
				gv->addEdge(routes[i]->path->adj[j].getGvEdgeID(), routes[i]->path->gvNodeID,
									routes[i]->path->adj[j].getDest()->gvNodeID,
									EdgeType::DIRECTED);
				gv->setEdgeColor(routes[i]->path->adj[j].getGvEdgeID(), "GREEN");
				gv->setEdgeThickness(routes[i]->path->adj[j].getGvEdgeID(), 3);
				i = routes[i]->path->getInfo();
				break;
			}
		}
	}

	gv->rearrange();
}

// TODO - falta implementar save e load data
void SchoolBus::loadData(){};
void SchoolBus::saveData(){};

void SchoolBus::menuStarting(){
	string Menu[5] = { "<<  SCHOOL MANAGEMENT >>", "<<  CLIENT MANAGEMENT >>", "<<  BUS MANAGEMENT    >>", "<<  VIEW OF CITY MAP  >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<   WELLCOME   >>>>>" << endl << endl;

		for (int i = 0; i < 5; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 5)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 4;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					menuSchoolManagement();
					break;
				case 1:
					validade = false;
					menuClientManagement();
					break;
				case 2:
					validade = false;
					menuBusManagement();
					break;
				case 3:
					// TODO - APAGAR/MODIFICAR
					showGraph(0, 6);
					break;
				case 4:
					saveData();
					exiting();
				}
			}
		}
	}
}

void SchoolBus::menuSchoolManagement(){
	string Menu[4] = { "<<   SEE SCHOOLS      >>", "<<  SEARCH SCHOOL     >>", "<<  BACK              >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<    SCHOOLS   >>>>>" << endl << endl;

		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 4)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					exit(0);
					break;
				case 1:
					validade = false;
					exit(0);
					break;
				case 2:
					validade = false;
					menuStarting();
					break;
				case 3:
					saveData();
					exiting();
				}
			}
		}
	}
}

void SchoolBus::menuClientManagement(){
	string Menu[4] = { "<<  SEE CLIENTS       >>", "<<  SEARCH CLIENT     >>", "<<  BACK              >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<    CLIENT    >>>>>" << endl << endl;

		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 4)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					exit(0);
					break;
				case 1:
					validade = false;
					exit(0);
					break;
				case 2:
					validade = false;
					menuStarting();
					break;
				case 3:
					saveData();
					exiting();
				}
			}
		}
	}
}

void SchoolBus::menuBusManagement(){
	string Menu[4] = { "<<  SEE ALL BUS       >>", "<<  SEARCH BUS        >>", "<<  BACK              >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<     BUS      >>>>>" << endl << endl;

		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 4)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					exit(0);
					break;
				case 1:
					validade = false;
					exit(0);
					break;
				case 2:
					validade = false;
					menuStarting();
					break;
				case 3:
					saveData();
					exiting();
				}
			}
		}
	}
}
