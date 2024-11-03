Parthi is interested in graph theory and wants to determine if there exists a valid path from a given starting vertex to an ending vertex in a graph. He decided to use Depth-First Search (DFS) to solve this problem.



Given a graph with vertices and edges, your task is to help Parthi write a program that determines if there is a valid path from a specified starting vertex to an ending vertex.



A valid path is a sequence of vertices such that there is an edge between consecutive vertices in the sequence.

Input format :
The first line of input consists of the two integers n and m, representing the number of vertices and edges in the graph, respectively, separated by a space.

The next m lines consist of two integers u and v, representing an undirected edge between vertices u and v.

The last two lines of input consist of the two integers start and end, representing the starting and ending vertices, respectively.

Output format :
The output consists of the following format:



If there is a valid path from the starting vertex to the ending vertex, print: "There is a path from [start] to [end]".

If there is no valid path from the starting vertex to the ending vertex, print: "There is no path from [start] to [end]".



Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 = n = 10, 0 = m = n*(n-1)/2

1 = u, v = n, u ? v

1 = start, end = n, start ? end

Sample test cases :
Input 1 :
5 6
0 1
1 2
2 3
3 4
0 3
2 4
1
3
Output 1 :
There is a path from 1 to 3
Input 2 :
5 6
0 1
1 2
2 3
3 4
0 3
2 4
0
4
Output 2 :
There is a path from 0 to 4





#include <stdio.h>

#define MAX_SIZE 100

int dfs(int adjMatrix[][MAX_SIZE], int n, int start, int end, int visited[MAX_SIZE]) {
    if (start == end)
        return 1;

    visited[start] = 1;

    for (int i = 0; i < n; ++i) {
        if (adjMatrix[start][i] && !visited[i] && dfs(adjMatrix, n, i, end, visited))
            return 1;
    }

    return 0;
}

int validPath(int n, int edges[][2], int m, int start, int end) {
    int adjMatrix[MAX_SIZE][MAX_SIZE] = {0};

    for (int i = 0; i < m; ++i) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }

    int visited[MAX_SIZE] = {0};

    return dfs(adjMatrix, n, start, end, visited);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int edges[MAX_SIZE][2];
    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &edges[i][0], &edges[i][1]);
    }

    int start, end;
    scanf("%d %d", &start, &end);

    if (validPath(n, edges, m, start, end)) {
        printf("There is a path from %d to %d\n", start, end);
    } else {
        printf("There is no path from %d to %d\n", start, end);
    }

    return 0;
}
