#include "Graph.h"


int main(int argc, char ** argv)
{

	// create a graph
	Graph graph1;

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