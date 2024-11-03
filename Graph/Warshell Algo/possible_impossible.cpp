Aaron is a project manager responsible for organizing a series of tasks to complete a complex project. Each task has a task ID, and some tasks have dependencies on others, meaning they can only be started once their prerequisite tasks are completed. 



Write a program to assist Aaron in determining if it is possible to create a project schedule that completes all tasks based on their dependencies using Warshall's Algorithm.



Example 1



Input:

4

0 1

0 2

1 2

2 3



Output:

Possible



Explanation:

Task 0 depends on Task 1 and Task 2. Task 1 depends on Task 2. Task 2 depends on Task 3. There are no circular dependencies or cycles, so a project schedule can be created.



Example 2



Input:

3

1 0

2 1

0 2



Output:

Impossible



Explanation:

Task 1 depends on Task 0, Task 2 depends on Task 1, and Task 0 depends on Task 2, creating a cycle. This cycle makes it impossible to create a valid project schedule.

Input format :
The first line of input consists of an integer N, representing the number of tasks in the project.

The following N lines consist of two space-separated integers each, representing the task ID and the task ID it depends on.

Output format :
If it is possible to create a project schedule that completes all tasks based on the given dependencies, print "Possible."

Otherwise, print "Impossible".

Code constraints :
The test cases will under the following constraints:

1 = N = 10

Sample test cases :
Input 1 :
4
0 1
0 2
1 2
2 3
Output 1 :
Possible
Input 2 :
3
1 0
2 1
0 2
Output 2 :
Impossible



#include <stdio.h>

#define MAX_TASKS 100

int canCompleteAllTasks(int n, int dependencies[][2]) {
    // Initialize the adjacency matrix with zeros (no initial dependencies)
    int graph[MAX_TASKS][MAX_TASKS] = {0};

    // Set the task dependencies in the adjacency matrix
    for (int i = 0; i < n; ++i) {
        int taskID = dependencies[i][0];
        int prerequisiteTaskID = dependencies[i][1];
        graph[taskID][prerequisiteTaskID] = 1;
    }

    // Applying Warshall's algorithm to update the graph
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }

    // Check if there is a path from each task to itself (a cycle)
    for (int i = 0; i < n; ++i) {
        if (graph[i][i]) {
            return 0; // Not possible to complete all tasks
        }
    }

    return 1; // Possible to complete all tasks
}

int main() {
    int n;
    scanf("%d", &n);

    int dependencies[MAX_TASKS][2];
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &dependencies[i][0], &dependencies[i][1]);
    }

    if (canCompleteAllTasks(n, dependencies)) {
        printf("Possible");
    } else {
        printf("Impossible");
    }

    return 0;
}
