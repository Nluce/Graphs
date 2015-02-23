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

public:
	void AddNode(GraphNode* node)
	{
		nodes.push_back(node);
	}

	void RemoveNode(GraphNode* nodeToRemove)
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
			if (node == nodeToRemove)
			{
				nodes.erase(nodes.begin() + i);
				i--;
			}

		}
	}

	void ConnectNodes(GraphNode* nodeA, GraphNode* nodeB, float cost)
	{
		// this initializes the Edge struct with the start, end and cost.
		Edge edge = {
			nodeA,
			nodeB,
			cost
		};

		// the edge must be added to both nodes
		nodeA->AddEdge(edge);
		nodeB->AddEdge(edge);
	}

};

