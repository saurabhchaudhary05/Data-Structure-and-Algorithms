#include <stdio.h>
#include <stdlib.h>

struct Task {
    int urgency;
};

void swap(struct Task* a, struct Task* b) {
    struct Task temp = *a;
    *a = *b;
    *b = temp;
}

// Function to insert a new task into the binary heap based on urgency
void insertTask(struct Task heap[], int* heapSize, struct Task newTask) {
    (*heapSize)++;
    
    int i = (*heapSize) - 1;
    heap[i] = newTask;
    while (i > 0 && heap[(i - 1) / 2].urgency < heap[i].urgency) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(struct Task heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i].urgency);
    }
    printf("\n");
}

int main() {
    struct Task taskHeap[100];
    int heapSize = 0;
    
    while (1) {
        struct Task newTask;
        if (scanf("%d", &newTask.urgency) != 1 || newTask.urgency == -1) {
            break;
        }
        insertTask(taskHeap, &heapSize, newTask);
    }
    printHeap(taskHeap, heapSize);
    
    return 0;
}
Liam is developing a task-scheduling algorithm for an operating system. Tasks arrive with varying urgencies, and he needs to implement a function to insert new tasks into a binary max-heap.



Write the code to help him insert a new task into a binary max-heap.

Input format :
The input consists of a series of space-separated integers, representing the urgencies of tasks, that are to be inserted into the heap.

Output format :
The output prints the binary max-heap, after inserting all the tasks.

Code constraints :
The maximum heap size is defined by maxSize (here set to 100).

Sample test cases :
Input 1 :
5 3 8 1 
Output 1 :
8 3 5 1 
Input 2 :
10 15 12 20 7 11 13
Output 2 :
20 15 13 10 7 11 12 
