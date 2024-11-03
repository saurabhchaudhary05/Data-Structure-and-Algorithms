Latha is studying graph theory and is currently learning about detecting negative cycles in a weighted directed graph. She is interested in implementing the Floyd-Warshall algorithm to determine if a given graph contains any negative cycles.



Write a program to help Latha determine whether the given weighted directed graph contains any negative cycles.

Input format :
The first line of input consists of two space-separated integers, V and E. V represents the number of vertices, and E represents the number of edges in the graph.

The next lines each contain three space-separated integers, u, v, and w, representing a directed edge from vertex u to vertex v with weight w.

Output format :
If there is a negative cycle in the graph, print "Yes"

Otherwise, print "No"

Code constraints :
The test cases will fall under the following constraints:

1 = V = 4

0 = E = V*(V-1)/2

0 = u, v < V

-100 = w = 100

Sample test cases :
Input 1 :
4 3
0 1 1
1 2 -1
2 3 -1
Output 1 :
Yes
Input 2 :
4 7
0 1 1
1 2 1
2 3 1
3 1 1
3 0 1
1 0 -3
3 1 -1
Output 2 :
No



#include <stdio.h>

#define V 4
#define INF 99999

void printSolution(int dist[][V]);

int negCyclefloydWarshall(int graph[][V]) {
    int dist[V][V];
    int i, j, k;

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for (i = 0; i < V; i++)
        if (dist[i][i] < 0)
            return 1; 
    return 0;
}

int main() {
    int graph[V][V];

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    if (negCyclefloydWarshall(graph))
        printf("Yes");
    else
        printf("No");

    return 0;
}

