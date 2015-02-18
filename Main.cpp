#ifndef _GRAPH_H_
#define _GRAPH_H_
#include <string>
#include "GraphNode.h"


struct Edge
{
	GraphNode*		start;
	GraphNode*		end;

	float			cost;
};

#endif //_GRAPH_H_