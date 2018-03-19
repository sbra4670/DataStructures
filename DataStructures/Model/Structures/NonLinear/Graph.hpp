//
//  Graph.hpp
//  DataStructures
//
//  Created by Bravo, Sebastian on 3/19/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <iostream>
#include <assert.h>

using namespace std;
template <class Type>
class Graph

{
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    //Graph operations (Shown in UML Diagram)
    
    void addVertex(const Type& value);
    
    //Connect Vertices (Shown in UML Diagram)
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target, int cost);
    
    //Disconnect Vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    Type & operator[] (int vertex);
    Type operator [] ( int vertex) const;
    int size() const;
    
    //Check connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target)const;
    std::set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
};

template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
Graph<Type> :: Graph()
{
    this -> vertexCount = 0;
}

/*
Java allows objects to be null, but c++ does not.
*/

template <class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}

//Left hand side operator
template& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

//Right hand side operator
template <class Type>
Type Graph<Type> :: operator[](<#int vertex#>) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}


template <class Type>
void Graph<Type> :: addVertex(const Type &value)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[otherVertexNumber][otherVertexNumber] = false;
    }
    
    graphData[newVertexNumber] = value;
}



#endif /* Graph_hpp */
