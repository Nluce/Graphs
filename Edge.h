#pragma once
class Edge
{
public:
	Edge();
	~Edge();
	GraphNode*		start;
	GraphNode*		end;

	float			cost;
};

