#pragma once
#include <string>
#include "GraphNode.h"
#include "Edge.h"
#include <vector>

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
		// TODO write this

	}
};
