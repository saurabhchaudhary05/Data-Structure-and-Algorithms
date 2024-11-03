You are attending a party where there are several people, and some of them know each other. 



You are given a matrix representing the acquaintances among the attendees. If cell (i, j) in the matrix is 1, it means that person i knows person j, and if it is 0, it means they do not know each other.



Your task is to find out if there is a celebrity in the party using Warshall's Algorithm. 



A celebrity is someone who is known by everyone else at the party but does not know anyone themselves. If such a celebrity exists, your goal is to identify their name in the list of attendees.



Write a program that applies Warshall's Algorithm to determine the presence of a celebrity at the party and, if one exists, output their index in the list. Otherwise, indicate that there is no celebrity at the party.

Input format :
The first line of input consists of an integer N, representing the number of people attending the party.

The following N lines consist of N space-separated integers, representing the acquaintance matrix.

Output format :
If a celebrity is present at the party, output a single line: "A celebrity is present at index X in the list of attendees," where X is the index of the celebrity in the list (0-based index).

If there is no celebrity at the party, output a single line: "There is no celebrity at the party."



Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 <= N <= 10

1 <= i, j <= n

1 <= x <= n

Sample test cases :
Input 1 :
4
0 1 1 0
0 0 1 0
0 0 0 0
0 0 1 0
Output 1 :
A celebrity is present at index 2 in the list of attendees.
Input 2 :
5
0 1 1 0 0
0 0 0 0 0
0 0 0 1 0
0 0 0 0 1
0 0 0 0 0
Output 2 :
There is no celebrity at the party.
Input 3 :
3
0 1 1
0 0 0
0 1 0
Output 3 :
A celebrity is present at index 1 in the list of attendees.



#include <stdio.h>

#define MAX_N 100

int findCelebrity(int acquaintances[MAX_N][MAX_N], int n) {
    int transitiveClosure[MAX_N][MAX_N];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transitiveClosure[i][j] = acquaintances[i][j];
        }
    }
    
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                transitiveClosure[i][j] = transitiveClosure[i][j] || (transitiveClosure[i][k] && transitiveClosure[k][j]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        int isCelebrity = 1;
        for (int j = 0; j < n; ++j) {
            if (i != j && (transitiveClosure[i][j] || !transitiveClosure[j][i])) {
                isCelebrity = 0;
                break;
            }
        }
        if (isCelebrity)
            return i;
    }
    
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int acquaintances[MAX_N][MAX_N];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &acquaintances[i][j]);
        }
    }

    int celebrityIndex = findCelebrity(acquaintances, n);

    if (celebrityIndex != -1) {
        printf("A celebrity is present at index %d in the list of attendees.", celebrityIndex);
    } else {
        printf("There is no celebrity at the party.");
    }

    return 0;
}

