Varsha is a computer science student working on algorithms. She wants to develop a program that can efficiently find the shortest path from the top-left corner to the bottom-right corner of a 2D grid. Each cell in the grid represents a node, and the weight of the edges between adjacent nodes is given. 



Varsha knows that the Floyd-Warshall algorithm can help her solve this problem effectively.



Help Varsha write a program that uses the Floyd-Warshall algorithm to find the shortest path from the top-left corner to the bottom-right corner in the given 2D grid.

Input format :
The first line of input consists of an integer V, representing the number of vertices in the grid (VxV grid).

The next V lines contain V space-separated integers, representing the adjacency matrix of the grid.

Each cell graph [i][j] indicates the weight of the edge between node i and node j.

If there is no direct edge (not reachable), the weight is represented by a value of INF (10000000).

Output format :
The output prints a single line representing the shortest path from the top-left corner (node 0) to the bottom-right corner (node V-1).

Print the nodes in the path, separated by "->".

Code constraints :
The test cases will fall under the following constraints:

2 = V = 10 (number of territories in the grid)

0 = graph[i][j] = 10000000

0 = u, v = V-1

Sample test cases :
Input 1 :
4
0 3 10000000 7
8 0 2 10000000
5 10000000 0 1
2 10000000 10000000 0
Output 1 :
0 -> 1 -> 2 -> 3
Input 2 :
3
0 1 2
1 0 3
2 3 0
Output 2 :
0 -> 2
Input 3 :
4
0 5 10000000 10
10000000 0 3 10000000
10000000 10000000 0 1
10000000 10000000 10000000 0
Output 3 :
0 -> 1 -> 2 -> 3



#include <stdio.h>

#define INF 10000000
#define MAXN 100

void initialise(int V, int graph[MAXN][MAXN], int dis[MAXN][MAXN], int Next[MAXN][MAXN]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dis[i][j] = graph[i][j];
            if (graph[i][j] == INF)
                Next[i][j] = -1;
            else
                Next[i][j] = j;
        }
    }
}

void floydWarshall(int V, int dis[MAXN][MAXN], int Next[MAXN][MAXN]) {
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dis[i][k] == INF || dis[k][j] == INF)
                    continue;

                if (dis[i][j] > dis[i][k] + dis[k][j]) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                    Next[i][j] = Next[i][k];
                }
            }
        }
    }
}

void printPath(int path[], int n) {
    for (int i = 0; i < n - 1; i++)
        printf("%d -> ", path[i]);
    printf("%d\n", path[n - 1]);
}

int main() {
    int V;
    scanf("%d", &V);

    int graph[MAXN][MAXN];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int dis[MAXN][MAXN];
    int Next[MAXN][MAXN];

    initialise(V, graph, dis, Next);
    floydWarshall(V, dis, Next);

    int u = 0; // Top-left corner
    int v = V - 1; // Bottom-right corner

    int path[MAXN];
    path[0] = u;
    int index = 1;
    while (u != v) {
        u = Next[u][v];
        path[index++] = u;
    }

    printPath(path, index);

    return 0;
}

