/*#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

int serveIceCream(int arr[], int& n) {
    if (n <= 0)
        return -1;

    int mostExcited = arr[0];

    arr[0] = arr[n - 1];
    n--;

    maxHeapify(arr, n, 0);
    return mostExcited;
}

int main() {
    int* children = nullptr;
    int n;

    cin >> n;
    children = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> children[i];
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(children, n, i);
    }
    int mostExcited = serveIceCream(children, n);

    if (mostExcited != -1) {
        cout << mostExcited << endl;
    }

    while (n > 0) {
        int mostExcited = serveIceCream(children, n);
        if (mostExcited != -1) {
            cout << mostExcited << " ";
        }
    }

    delete[] children;
    return 0;
}*/
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
// to heapify a subtree with root at given index
void MaxHeapify(int arr[], int i, int N)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;

    if (l < N && arr[l] > arr[i])
        largest = l;
    if (r < N && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        MaxHeapify(arr, largest, N);
    }
}

// This function basically builds max heap
void convertMaxHeap(int arr[], int N)
{
    // Start from bottommost and rightmost internal node and heapify all internal nodes in bottom up way
    for (int i = (N - 2) / 2; i >= 0; --i)
        MaxHeapify(arr, i, N);
}


void printArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout<<endl;
}

int main()
{
    int arrayCount;
    cin>>arrayCount;
    int arr[arrayCount];
    for (int i=0;i<arrayCount;i++){
        cin>>arr[i];
    }
	sort(arr,arr+arrayCount);
	int b[50];
	for(int i=0;i<arrayCount-1;i++){
		b[i]=arr[i];
	}
    convertMaxHeap(b, arrayCount-1);

    printArray(b, arrayCount-1);

    return 0;
}
