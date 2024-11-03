Surya is planning a trip and wants to explore different flight routes to reach his destination. He has access to a database of flight connections between various cities. To help him plan his journey efficiently, you need to implement a program that performs Depth First Traversal (DFS) on the flight network graph.



Write a program that takes flight information as input and performs a DFS traversal on the flight network graph starting from a given city.

Input format :
The first line consists of two integers separated by a space: V, representing the number of cities in the flight network, and E, representing the number of flight connections.

The following E lines consist of the flight connections between cities, represented as pairs of integers v and w, where v is the source city and w is the destination city.

The last line of input consists of the starting city for DFS traversal, denoted by startVertex.

Output format :
The output displays a message in the format "Depth First Traversal starting from vertex [startVertex]:", where [startVertex] is the integer representing the initial city. Following that next line, it should list the visited cities in DFS traversal order, separated by spaces.

Code constraints :
The test cases will fall under the following constraints:

2 = V = 10

0 = E = V*(V-1)/2

0 = v, w < V

0 = startVertex < V

Sample test cases :
Input 1 :
4 4
0 1
1 2
2 3
3 0
2
Output 1 :
Depth First Traversal starting from vertex 2:
2 3 0 1 
Input 2 :
5 6
0 1
0 2
1 2
2 0
2 3
3 3
1
Output 2 :
Depth First Traversal starting from vertex 1:
1 2 0 3 



#include <stdio.h>

#define MAX_VERTICES 100

void addEdge(int adj[MAX_VERTICES][MAX_VERTICES], int v, int w) {
    adj[v][w] = 1;
}

void DFS(int adj[MAX_VERTICES][MAX_VERTICES], int visited[MAX_VERTICES], int V, int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < V; ++i) {
        if (adj[v][i] && !visited[i]) {
            DFS(adj, visited, V, i);
        }
    }
}

int main() {
    int V, E;
    scanf("%d", &V);
    scanf("%d", &E);

    int adj[MAX_VERTICES][MAX_VERTICES] = {0};
    int visited[MAX_VERTICES] = {0};

    for (int i = 0; i < E; ++i) {
        int v, w;
        scanf("%d %d", &v, &w);
        addEdge(adj, v, w);
    }

    int startVertex;
    scanf("%d", &startVertex);

    printf("Depth First Traversal starting from vertex %d:\n", startVertex);
    DFS(adj, visited, V, startVertex);

    return 0;
}
