#include <stdio.h>
void MaxHeapify(int arr[], int i, int N) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;

    if (l < N && arr[l] > arr[i])
        largest = l;
    if (r < N && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        MaxHeapify(arr, largest, N);
    }
}

void convertMaxHeap(int arr[], int N) {
    for (int i = (N - 2) / 2; i >= 0; --i)
        MaxHeapify(arr, i, N);
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arrayCount;
    scanf("%d", &arrayCount);
    int arr[arrayCount];
    for (int i = 0; i < arrayCount; i++) {
        scanf("%d", &arr[i]);
    }

    convertMaxHeap(arr, arrayCount);

    printArray(arr, arrayCount);

    return 0;
}

/*You and your friend are planning a trip and want to create a map of the places you'd like to visit. You've recorded the travel times between these places as integers, representing the hours it takes to travel. To determine which two places have the longest travel time between them, you decide to automate the process.



To do this, you need to take an array of input values, but you want to convert it into a max-heap representation. This conversion will help you efficiently find the maximum travel time among the given set of places.



Note: This kind of question will be helpful in clearing Accenture recruitment.

Input format :
The first line of the input consists of an integer n, representing the total number of recorded times for traveling between two places.

The second line of the input consists of n space-separated integer values, representing the time taken during travel from one place to another.

Output format :
The output prints the max-heap representation of the recorded time, separated by a space.

Code constraints :
1<=number of recorded time<=30

1<=value of recorded time<=50

Sample test cases :
Input 1 :
6
10 20 50 30 80 60 
Output 1 :
80 30 60 10 20 50 
Input 2 :
10
4 6 9 7 8 20 10 12 19 10
Output 2 :
20 19 10 12 10 9 4 6 7 8 */
