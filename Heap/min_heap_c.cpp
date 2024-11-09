1-1 elements user se le rhe h...meansinsertion

#include <stdio.h>
#include <stdlib.h>

struct Location {
    int distance;
};

void swap(struct Location* a, struct Location* b) {
    struct Location temp = *a;
    *a = *b;
    *b = temp;
}

// Function to insert a new location into the binary heap
void insertLocation(struct Location heap[], int* heapSize, struct Location newLocation) {
    (*heapSize)++;
    
    int i = (*heapSize) - 1;
    heap[i] = newLocation;

    while (i > 0 && heap[i].distance < heap[(i - 1) / 2].distance) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}


void printHeap(struct Location heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i].distance);
    }
    printf("\n");
}

int main() {
    struct Location binaryHeap[100];
    int heapSize = 0;
    
    while (1) {
        struct Location newLocation;
        if (scanf("%d", &newLocation.distance) != 1) {
            break;
        }

        insertLocation(binaryHeap, &heapSize, newLocation);
    }

    printHeap(binaryHeap, heapSize);

    return 0;
}


Michael is developing a navigation system for a delivery robot where new delivery locations are frequently added to the system. He requires a function to assist him in inserting these new delivery locations into a binary min-heap, based on their distances from the current location.



Write a code to assist Michael in inserting new delivery locations (represented as integers indicating distances) into a binary min-heap.

Input format :
The input consists of a series of space-separated integers, representing the distance of locations, that are to be inserted into the heap.

Output format :
The output prints the binary min-heap, after inserting all the distances of locations.

Code constraints :
The maximum heap size is defined by maxSize (here set to 100).

Sample test cases :
Input 1 :
5 10 3 1 7
Output 1 :
1 3 5 10 7 
Input 2 :
15 8 12 6 4 9
Output 2 :
4 6 9 15 8 12 
