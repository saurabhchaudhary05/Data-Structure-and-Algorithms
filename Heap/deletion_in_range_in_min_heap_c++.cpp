#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void buildMinHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void deleteInRange(int arr[], int& n, int start, int end) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] >= start)
            break;
    }

    int j = i;
    for (i=0; i < n; i++) {
        if (arr[i] > end)
            break;
    }

    int deleteCount = i - j;

    if (deleteCount > 0) {
        for (int k = j + deleteCount; k < n; k++) {
            arr[k - deleteCount] = arr[k];
        }
        n -= deleteCount;
    }

    buildMinHeap(arr, n);
}

void displayHeap(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start, end;
    cin >> start >> end;

    buildMinHeap(arr, n);

    deleteInRange(arr, n, start, end);
    
    displayHeap(arr, n);

    return 0;
}

/*Kamal is working on a data manipulation project and needs to efficiently process a given set of integers within a specific range. He wants to create a program that can help him build a min-heap from the data and delete elements falling within a specified range from the heap. Can you assist Kamal by designing a program that meets his requirements?



Your task is to create a program that reads an array of integers, builds a min-heap from it, and then deletes elements falling within a given range from the min-heap.

Input format :
The first line of input consists of an integer n, the number of elements in the array.

The second line of input consists of n elements separated by spaces.

The third line of input consists of the start range and end range, separated by a space.

Output format :
The output displays the resulting min-heap after deleting elements within the specified range.(inclusive).



Refer to the sample output for formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 <= n <= 10

1 <= elements <= 100

range should be given input elements.

Sample test cases :
Input 1 :
7
20 36 82 17 51 3 96
20 96
Output 1 :
3 17 
Input 2 :
4
50 40 30 20
10 25
Output 2 :
30 40 50 */
