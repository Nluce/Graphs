#ifndef _GRAPH_H_
#define _GRAPH_H_
#include <string>
#include "GraphNode.h"

class GraphNode
{
public:
	Graphnode(int num);
	int nodeNumber;

	typedef std::vector<Edge> EdgeList;
	EdgeList edges;

};
