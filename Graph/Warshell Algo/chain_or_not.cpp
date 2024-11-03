You are given a map of cities and the highways that connect them. Your task is to determine whether there is a chain of highways that connects two specific cities.



Each city is represented by a unique integer from 0 to N-1, where N is the total number of cities. The highways are represented as a matrix of size NxN, where the cell (i, j) contains a 1 if there is a direct highway connecting city i to city j, and 0 otherwise.



Write a program using Warshall's Algorithm to find out if there exists a chain of highways that connects City 1 to City 2.

Input format :
The first line of input consists of an integer N, representing the number of cities.

The following N lines consist of N space-separated integers (0 or 1), representing the matrix of direct highways between cities.

The last line consists of two integers City1 and City2 for which the presence of a chain of highways needs to be determined.

Output format :
If there is a chain of highways connecting City1 and City2, print "There is a chain of highways connecting City 1 and City 2."

Otherwise, print "There is no chain of highways connecting City 1 and City 2."



Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 = N = 10

Each element of the matrix is either 0 or 1.

Sample test cases :
Input 1 :
3
0 1 0
0 0 1
1 0 0
1 2
Output 1 :
There is a chain of highways connecting City 1 and City 2.
Input 2 :
4
0 1 0 0
0 0 0 1
0 0 0 1
0 0 0 0
2 1
Output 2 :
There is no chain of highways connecting City 2 and City 1.


#include <stdio.h>

#define MAX_CITIES 100

int hasChainOfHighways(int n, int highways[MAX_CITIES][MAX_CITIES], int city1, int city2) {
    int distance[MAX_CITIES][MAX_CITIES];

    // Step 1: Initialize the distance matrix with the given highways matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            distance[i][j] = highways[i][j];
        }
    }

    // Step 2: Applying the Warshall algorithm
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                distance[i][j] = distance[i][j] || (distance[i][k] && distance[k][j]);
            }
        }
    }

    // Step 3: Return the result (whether there is a chain of highways between city1 and city2)
    return distance[city1][city2];
}

int main() {
    int n; // Number of cities
    scanf("%d", &n);

    int highways[MAX_CITIES][MAX_CITIES] = {0};

    // Taking input for direct highways
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &highways[i][j]);
        }
    }

    int city1, city2;
    scanf("%d %d", &city1, &city2);

    if (hasChainOfHighways(n, highways, city1, city2)) {
        printf("There is a chain of highways connecting City %d and City %d.", city1, city2);
    } else {
        printf("There is no chain of highways connecting City %d and City %d.", city1, city2);
    }

    return 0;
}
