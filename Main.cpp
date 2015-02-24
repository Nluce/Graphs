#include "Graph.h"
#include <iostream>
#include <stdio.h>

using namespace std;
int graphSize;
int currentNode;
int main(int argc, char ** argv)
{

	// create a graph
	cout << "Please enter the number of nodes in the graph" << endl;
	cin >> graphSize;

	Graph graph1 = Graph(graphSize);

	for (int i = 0; i < graphSize; i++){
		GraphNode * node = graph1.nodes[i];
		node->PrintNeighbors();
	}
	


	

	// code goes here
	system("pause");
	return 0;
}