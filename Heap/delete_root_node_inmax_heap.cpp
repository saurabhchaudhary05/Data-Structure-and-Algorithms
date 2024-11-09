#include <stdio.h>

#define MAX_SIZE 100

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void deleteRoot(int arr[], int *n)
{
    if (*n <= 0)
        return;

   // int lastElement = arr[*n - 1];
    arr[0] = arr[*n-1];
    (*n) = (*n) - 1;
    heapify(arr, *n, 0);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    buildMaxHeap(arr, n);
    deleteRoot(arr, &n);
    printArray(arr, n);

    return 0;
}
/*Vijay is fascinated by data structures and algorithms, particularly heap data structures. He wants to experiment with a program that implements a max heap and performs heap operations. He wishes to understand how deleting the root element from a max heap works.



Write a program that defines a max heap and implements the deletion of the root element. The program should receive an array representing the max heap, its size, and delete the root element. After deletion, the program should print the updated array.

Input format :
The first line of input contains an integer 'n', the size of the array representing the max heap.

The second line contains 'n' space-separated integers, representing the elements of the max heap.

Output format :
The output prints the updated max heap after deleting the root element, separated by a space.

Code constraints :
The test cases will under the following constraints:

1 = n = 10

The input array can have duplicate elements.

Sample test cases :
Input 1 :
5
23 25 2 12 52
Output 1 :
25 23 2 12 
Input 2 :
5
10 5 3 2 4
Output 2 :
5 4 3 2 */
