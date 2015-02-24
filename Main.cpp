#include "Graph.h"
#include <iostream>
#include <stdio.h>

using namespace std;
int graphSize;
int currentNode;
int main(int argc, char ** argv)
{

	// create a graph
	Graph graph1;
	cout << "Please enter the number of nodes in the graph" << endl;
	cin >> graphSize;

	for (int i = 1; i <= graphSize; i++)
	{
		GraphNode node[i] = GraphNode(i);
		graph1.AddNode(&node[i]);
	}

	// create a node
	GraphNode node1 = GraphNode(1);

	// add the node to the graph
	graph1.AddNode(&node1);

	// create a node
	GraphNode node2 = GraphNode(2);

	// add the node to the graph
	graph1.AddNode(&node2);

	// create a node
	GraphNode node3 = GraphNode(3);

	// add the node to the graph
	graph1.AddNode(&node3);

	// connect the two nodes
	graph1.ConnectNodes(&node1, &node2, 10.0f);
	graph1.ConnectNodes(&node1, &node3, 15.0f);

	node1.PrintNeighbors();

	


	

	// code goes here
	system("pasue");
	return 0;
}