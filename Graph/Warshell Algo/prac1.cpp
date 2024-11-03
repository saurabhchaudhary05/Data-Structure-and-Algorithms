Hannah is given the task of analyzing graphs and determining the reachability of nodes within the graph.



Your goal is to write a program to help Hannah solve this problem efficiently using Warshall's Algorithm.



A graph can be represented using an adjacency matrix. Given such an adjacency matrix and two vertices, u and v, the program should be able to answer whether there exists a path from vertex u to vertex v. Additionally, the program should compute the reachability of all vertices from each other within the graph.



Write a program to accomplish these tasks.

Input format :
The first line of input consists of an integer N, representing the number of vertices in the graph.

The following N lines consist of N space-separated integers, forming the adjacency matrix graph, where graph[i][j] is either 0 or 1.

The last line of input consists of two integers, u and v, representing the pair of vertices for which you need to check the reachability.

Output format :
The output prints the following:

An NxN matrix represents the reachability matrix for all pairs of vertices. Each element in the matrix should be 1 if there is a path from the corresponding row vertex to the column vertex, and 0 otherwise.
A message indicating whether there is a path from vertex u to vertex v in the graph If there is a path, print "Path Exists". Otherwise, print "Path does not Exist"


Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 = N = 10

Each element of the adjacency matrix is either 0 or 1.

0 = u, v < N (source and destination vertices).

Sample test cases :
Input 1 :
4
0 1 0 0
0 0 1 0
0 0 0 1
0 0 0 0
1 3
Output 1 :
0 1 1 1 
0 0 1 1 
0 0 0 1 
0 0 0 0 
Path Exists
Input 2 :
4
0 1 0 0
0 0 1 0
0 0 0 1
0 0 0 0
3 1
Output 2 :
0 1 1 1 
0 0 1 1 
0 0 0 1 
0 0 0 0 
Path does not Exist


#include <stdio.h>
#include <stdlib.h>

int isReachable(int **graph, int u, int v, int n) {
    return graph[u][v] == 1;
}

void computeReachability(int **graph, int n) {
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for the adjacency matrix
    int **graph = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        graph[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &graph[i][j]);
        }
    }

        computeReachability(graph, n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    
    int u, v;
    scanf("%d %d", &u, &v);

    if (isReachable(graph, u, v, n)) {
        printf("Path Exists");
    } else {
        printf("Path does not Exist");
    }

    // Deallocate dynamically allocated memory
    for (int i = 0; i < n; ++i) {
        free(graph[i]);
    }
    free(graph);

    return 0;
}
