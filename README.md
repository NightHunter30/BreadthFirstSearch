# Breadth First Search Algorithm Implementation in C++

## What's Breadth First Search Algorithm?
Breadth-first search (BFS) is an algorithm for traversing or searching tree or graph data structures. It starts at the tree root (or some arbitrary node of a graph, sometimes referred to as a 'search key'), and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level.


## How does BFS Algorithm Work?
Graph traversal requires the algorithm to visit, check, and/or update every single un-visited node in a tree-like structure. Graph traversals are categorized by the order in which they visit the nodes on the graph.

BFS algorithm starts the operation from the first or starting node in a graph and traverses it thoroughly. Once it successfully traverses the initial node, then the next non-traversed vertex in the graph is visited and marked.

Hence, you can say that all the nodes adjacent to the current vertex are visited and traversed in the first iteration. A simple queue methodology is utilized to implement the working of a BFS algorithm.

## Breadth First Search Architecture
![Alt text](https://i.imgur.com/C9vQfni.png "Concept Diagram")

Example Input
---

```c++
    vector<Edge> edges = {
        {0, 1}, {1, 2}, {1, 3}, 
        {1, 4}, {4, 9}, {4, 5},
        {5, 8}, {5, 6}, {6, 7},
    };
```
Output 
```
2 1 0 3 4 9 5 8 6 7
```
