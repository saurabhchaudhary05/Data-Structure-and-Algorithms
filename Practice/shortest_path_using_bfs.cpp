Gopi is working on a project that involves finding the shortest path between two nodes in a graph. He needs your help to implement a program that can efficiently find the shortest path between two nodes using the Breadth-First Search (BFS) algorithm.



Write a program to help Gopi implement this functionality. The program should take an undirected graph as input and find the shortest path between two given nodes.

Input format :
The first line contains an integer, v, representing the number of vertices in the graph.

The second line contains an integer, e, representing the number of edges in the graph.

The next e lines each contain two space-separated integers, src and dest, indicating an edge between vertex source and vertex destination.

The last two lines contain two integers, 'source' and 'destination', which specify the source and destination nodes for which you need to find the shortest path. These two lines are separated by a newline character.

Output format :
The output is displayed in the following format:



The first line consists of "Shortest path length is: X", where X represents the shortest path length.

The second line consists of "Path is: ", followed by the nodes in the shortest path, space-separated.



Refer to the sample output for the exact format.

Code constraints :
The test cases will fall under the following constraints:

1 = v = 15

0 = e = v * (v - 1) / 2

0 = source, destination < v

Sample test cases :
Input 1 :
8
10
0 1
0 3
1 2
3 4
3 7
4 5
4 6
4 7
5 6
6 7
0 
7
Output 1 :
Shortest path length is: 2
Path is: 0 3 7 




#include <stdio.h>
#include <limits.h>

void add_edge(int adj[][100], int src, int dest)
{
    adj[src][dest] = 1;
    adj[dest][src] = 1;
}

int BFS(int adj[][100], int src, int dest, int v, int pred[], int dist[])
{
    int queue[v];
    int front = -1, rear = -1;

    char visited[v];

    for (int i = 0; i < v; i++)
    {
        visited[i] = 0;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    visited[src] = 1;
    dist[src] = 0;
    queue[++rear] = src;

    while (front != rear)
    {
        int u = queue[++front];
        for (int i = 0; i < v; i++)
        {
            if (adj[u][i] && !visited[i])
            {
                visited[i] = 1;
                dist[i] = dist[u] + 1;
                pred[i] = u;
                queue[++rear] = i;

                if (i == dest)
                    return 1;
            }
        }
    }

    return 0;
}

void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[])
{
    int path[v];
    int crawl = dest;
    int pathLength = 0;
    path[pathLength++] = crawl;
    while (pred[crawl] != -1)
    {
        path[pathLength++] = pred[crawl];
        crawl = pred[crawl];
    }

    printf("Shortest path length is: %d\n", dist[dest]);

    printf("Path is: ");
    for (int i = pathLength - 1; i >= 0; i--)
        printf("%d ", path[i]);
}

int main()
{
    int v, e;
    scanf("%d", &v);

    int adj[100][100] = {0};

    scanf("%d", &e);

    for (int i = 0; i < e; i++)
    {
        int src, dest;
        scanf("%d %d", &src, &dest);
        add_edge(adj, src, dest);
    }

    int source, dest;
    scanf("%d %d", &source, &dest);

    int pred[v], dist[v];

    if (BFS(adj, source, dest, v, pred, dist))
        printShortestDistance(adj, source, dest, v, pred, dist);

    return 0;
}
