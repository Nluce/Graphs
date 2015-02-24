#pragma once
#include <string>
#include "GraphNode.h"
#include "Edge.h"
#include <vector>
#include <iostream>

using namespace std;

class GraphNode
{

public:
	int nodeNumber;
	typedef std::vector<Edge> EdgeList;
	EdgeList edges;

	GraphNode(int num)
	{
		nodeNumber = num;
	}


	void AddEdge(const Edge & edge)
	{
		edges.push_back(edge);
	}

	void PrintNeighbors()
	{
		cout << "Neighbors of node " << nodeNumber << ":" << endl;
		for (Edge edge : edges){
			if (edge.start == this){
				cout << " node " << edge.end->nodeNumber << endl;
			}
			if (edge.end == this){
				cout << " node " << edge.start->nodeNumber << endl;
			}
		}
	}


	bool IsNeighbor(GraphNode * otherNode) {
		return false;
	}

};
