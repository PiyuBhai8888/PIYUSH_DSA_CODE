#include <iostream>
#include<unordered_map>
#include<vector>
// #include <graph.h>
using namespace std;

class Graph {
    public:
    unordered_map<int, vector<int>> graph;// Adjacency list representation of the graph

    void addEdge(int a, int b){// Function to add an edge between two nodes
        graph[a].push_back(b);// Add edge from a to b
        graph[b].push_back(a);//    Add edge from b to a (undirected graph)
    }



};

int main(){
    Graph g;// Create a graph object
    cout<< "Graph created with edges: " << endl;

    // Add edges to the graph
    g.addEdge(1,2);
    g.addEdge(1,5);
    g.addEdge(2,3);
    g.addEdge(4,5);
    g.addEdge(5,6);

    

    return 0;
}


