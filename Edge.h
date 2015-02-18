#pragma once

class GraphNode;

class Edge
{
public:
	Edge();
	~Edge();
	GraphNode*		start;
	GraphNode*		end;

	float			cost;
};

