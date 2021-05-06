#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

// Data structure to store graph edges
struct Edge {
    int src, dest;
};

// Class to represent a graph object
class Graph
{
public:
    // construct a map of vectors to represent an adjacency list
    map<int, vector<int>> adjList;

    // Graph Constructor
    Graph(vector<Edge> const &edges)
    {
        // add edges to the undirected graph
        for (auto &edge: edges)
        {
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
};

// Perform BFS on graph starting from vertex v
void BFS(Graph const &graph, int v)
{
    // store visited vertices
    vector<bool> visited(graph.adjList.size(), false);

    // create a queue used to do BFS
    queue<int> queue;

    // mark source vertex as visited
    visited[v] = true;

    // push source vertex into the queue
    queue.push(v);

    // run till queue is not empty
    while (!queue.empty())
    {
        // pop front vertex from queue and print it
        v = queue.front();
        queue.pop();
        cout << v << " ";

        const auto it = graph.adjList.find(v);
        if(it != graph.adjList.end()) 
        {
            // loop through edges to find connected vertices
            for (int u : it->second)
            {
                if (!visited[u])
                {
                    // mark the vertex as visited and push it into queue 
                    visited[u] = true;
                    queue.push(u);
                }
            }
        }
    }
}

int main()
{
    // vector of graph edges
    vector<Edge> edges = {
        {0, 1}, {1, 2}, {1, 3}, 
        {1, 4}, {4, 9}, {4, 5},
        {5, 8}, {5, 6}, {6, 7},
    };

    // create a graph from edges
    Graph graph(edges);

    // perform the depth first search algorithm on the graph 
    BFS(graph, 2);

    return 0;
}
