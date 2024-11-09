#include <stdio.h>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heapSort(int arr[], int n) {
    

    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
	buildMaxHeap(arr, n);
    heapSort(arr, n);

    printArray(arr, n);

    return 0;
}
/*Chitra loves candies and wants to sort her collection of candies in a sequence of sweetness using a Heap Sort algorithm. Can you help her with this task?



Write a program to implement the heap sort algorithm with maxheap and sort Chitra's candies in ascending order.

Input format :
The first line of input consists of an integer N, representing the total number of candies Chitra has in her collection.

The second line of input consists of N space-separated integers, representing the sweetness levels of the candies.

Output format :
The output prints a single line containing N space-separated integers, representing the sorted order of the candies.

Code constraints :
The test cases will fall under the following constraints:

1 = n = 10

1 = sweetness level of candies = 1000

Sample test cases :
Input 1 :
5
275 635 987 145 325
Output 1 :
145 275 325 635 987 
Input 2 :
8
44 52 63 95 98 74 36 65
Output 2 :
36 44 52 63 65 74 95 98 */
