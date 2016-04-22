#include "SchoolBus.h"
#include "Graphviewer.h"
#include "GraphCreator.h"

using namespace std;

// TODO - APAGAR - grafo de testes
Graph<int> CreateTestGraph(){
	Graph<int> myGraph;

	for(int i = 0; i < 20; i++)
		myGraph.addVertex(i);

	myGraph.addEdge(0, 1, 2);
	myGraph.addEdge(0, 3, 7);
	myGraph.addEdge(1, 3, 3);
	myGraph.addEdge(1, 4, 5);
	myGraph.addEdge(2, 0, 2);
	myGraph.addEdge(2, 5, 5);
	myGraph.addEdge(3, 2, 1);
	myGraph.addEdge(3, 4, 1);
	myGraph.addEdge(3, 5, 6);
	myGraph.addEdge(3, 6, 4);
	myGraph.addEdge(4, 6, 2);
	myGraph.addEdge(5, 4, 2);
	myGraph.addEdge(5, 3, 3);
	myGraph.addEdge(6, 5, 4);
	myGraph.addEdge(7, 6, 1);
	myGraph.addEdge(7, 8, 2);
	myGraph.addEdge(9, 12, 5);
	myGraph.addEdge(10, 11, 1);
	myGraph.addEdge(6, 14, 3);
	myGraph.addEdge(13, 4, 1);
	myGraph.addEdge(10, 17, 6);
	myGraph.addEdge(15, 18, 4);
	myGraph.addEdge(16, 18, 2);
	myGraph.addEdge(17, 19, 2);
	myGraph.addEdge(6, 10, 3);
	myGraph.addEdge(12, 15, 4);
	myGraph.addEdge(18, 3, 4);

	return myGraph;
}

int main(){

	// TODO - APAGAR -  c�digo de teste

	SchoolBus schoolBus(CreateTestGraph());
	schoolBus.loadData();
	schoolBus.menuStarting();

	/*int tempID = 1;

	GraphViewer *gv = graphCreator(txtAReader(),txtBReader() ,txtCReader(tempID));
	gv->rearrange();
	getchar();*/


	return 0;
}
