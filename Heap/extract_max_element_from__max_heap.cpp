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

int extractMax(int arr[], int* n) {

    int maxElement = arr[0];
    arr[0] = arr[*n - 1];
    (*n)--;
    heapify(arr, *n, 0);

    return maxElement;
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

    int maxElement = extractMax(arr, &n);
    if (maxElement != -1) {
        printf("%d\n", maxElement);
    }

    printArray(arr, n);

    return 0;
}

Lithika is a curious computer science enthusiast who has been exploring heaps and their operations. She wants to experiment with a Max Heap and observe its behavior when extracting the maximum element.



she wants to perform the following operations:



Build a Max Heap from the given array.
Extract the maximum element from the Max Heap.
Display the array after the maximum element is removed.


Write a program to help Lithika with her experiment.

Input format :
The first line contains an integer, n, representing the number of elements in the array.

The next line contains n space-separated integers, arr [i], representing the elements of the initial array.

Output format :
The first line of output displays the maximum element extracted from the Max Heap on the first line.

The second line of output displays the elements of the array after removing the maximum element on the second line. Separate the elements by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 <= n <= 10

1 <= arr[i] <= 100

Sample test cases :
Input 1 :
5
6 8 4 2 1
Output 1 :
8
6 2 4 1 
Input 2 :
5
7 4 8 2 1
Output 2 :
8
7 4 1 2 
