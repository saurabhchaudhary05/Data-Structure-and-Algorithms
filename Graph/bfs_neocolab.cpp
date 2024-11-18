Dhaya is currently navigating through a maze, and your objective is to assist him in locating the shortest path from the entrance to the exit. The maze is depicted as a grid, with each cell being either a wall or an open path.



Your task involves creating a program that utilizes the Breadth-First Search (BFS) algorithm to systematically explore the maze and identify the shortest route to reach the exit.

Input format :
The first line of input consists of the two integers, V and E, separated by a space, where V represents the number of cells in the maze, and E represents the number of connections (edges) between cells.

The next E lines each contain two integers, u and v, separated by a space, indicating a connection (edge) between cell u and cell v. A connection represents an open path in the maze.

Output format :
The output prints the BFS traversal order of the maze, separated by spaces. This represents the sequence of cells explored to find the shortest path from the entrance to the exit.

Code constraints :
The test cases will fall under the following constraints:

1 <= V <= 10

0 <= E <= V*(V-1)/2

0 <= u, v < V

Sample test cases :
Input 1 :
5 4
0 1
0 2 
0 3
2 4
Output 1 :
0 1 2 3 4 



#include <stdio.h>

#define MAX_V 100

void enqueue(int* queue, int* rear, int vertex) {
    queue[++(*rear)] = vertex;
}

int dequeue(int* queue, int* front) {
    return queue[++(*front)];
}

void bfsOfGraph(int V, int adjList[MAX_V][MAX_V]) {
    int visited[MAX_V] = {0};
    int queue[MAX_V];
    int front = 0, rear = 0;

    int startVertex = 0;
    enqueue(queue, &rear, startVertex);
    visited[startVertex] = 1;

    while (front < rear) {
        int currVertex = dequeue(queue, &front);

        printf("%d ", currVertex);

        for (int i = 0; i < V; ++i) {
            if (adjList[currVertex][i] == 1 && visited[i] == 0) {
                enqueue(queue, &rear, i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int V, E;
    scanf("%d %d", &V, &E);

    int adjList[MAX_V][MAX_V] = {0};

    for (int i = 0; i < E; ++i) {
        int u, v;
        scanf("%d %d", &u, &v);
        adjList[u][v] = 1;
    }

    bfsOfGraph(V, adjList);

    return 0;
}
