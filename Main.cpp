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

	
	{
		int i = rand() % graphSize;
		GraphNode * node = graph1.nodes[i];
		bool stop = false;
		do {
			cout << endl << "you are at this node... " << endl;

			node->PrintNeighbors();

			cout << "Which node do you want to go to? (enter -1 to stop) " << endl;
			int newNodeNumber;
			cin >> newNodeNumber;

			if (newNodeNumber == -1){
				stop = true;
			} else
			if (newNodeNumber < 0 || newNodeNumber >= graphSize)
			{
				cout << "bad node number" << endl;
			}
			else {
				GraphNode * node2 = graph1.nodes[newNodeNumber];
				if (node->IsNeighbor(node2)){
					node = node2;
				}
				else {
					cout << "nodes are not neighbors" << endl;
				}
			}



		} while (!stop);

	}


	

	// code goes here
	system("pause");
	return 0;
}