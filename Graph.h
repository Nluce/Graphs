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
	NodeList nodes;

	void AddNode(GraphNode* node)
	{
		nodes.push_back(node);
	}
	void RemoveNode(GraphNode* Node)
	{
		for (int i = 0; i < nodes.size(); i++)
		{
			GraphNode * node = nodes[i];




			for (int j = 0; j < node->edges.size(); j++)
			{
				Edge edge = node->edges[j];
				if (edge.end == node)
				{
					// this removes element j from the vector...
					node->edges.erase(node->edges.begin() + j);

					// backup one step, because we deleted one.
					j--;  
				}
			}

		}
	}

};

