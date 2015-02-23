#pragma once
#include "GraphNode.h"
class Graph
{
	typedef std::vector<GraphNode*> NodeList;
public:
	Graph();
	Graph(unsigned int a_uiNodeCount);
	~Graph();
private:
	Nodelist nodes;

	void AddNode(GraphNode* Node);
	void RemoveNode(GraphNode* Node);


};

