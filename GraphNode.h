#pragma once
#include <string>
#include "GraphNode.h"
#include "Edge.h"
#include <vector>

class GraphNode
{
public:
	GraphNode(int num);
	int nodeNumber;

	typedef std::vector<Edge> EdgeList;
	EdgeList edges;
};
