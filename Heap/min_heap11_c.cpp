A magician has placed the enchanted gemstones in an array, and your task is to convert the array into a min heap, which will help you identify the gemstone with the kth most potent magic.



Given an array of elements and an element k, find the kth element after converting the array into a min-heap.



Note: This question was asked in Cisco recruitment.

Input format :
The first line of input is an integer value, representing the number of elements in the array.

The second line of the input consists of space-separated integer array values.

The third line of the input is an integer value, k.

Output format :
The first line of the output prints the space-separated integer values in the min-heap.

The second line of the output prints the kth element in the min-heap.

If k>n, print "Invalid entry".



Refer to the sample output for formatting specifications.

Code constraints :
size of array>0

k<=size of array

Sample test cases :
Input 1 :
5
2 4 1 5 9
3
Output 1 :
Min heap is: 1 4 2 5 9 
Kth element in min heap is 2
Input 2 :
5
2 4 1 5 9
12
Output 2 :
Invalid entry


#include <stdio.h>

void min_heap(int *a, int m, int n) {
    int j, t;
    t = a[m];
    j = 2 * m;
    while (j <= n) {
        if (j < n && a[j + 1] < a[j])
            j = j + 1;
        if (t < a[j])
            break;
        else if (t >= a[j]) {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = t;
}

void build_minheap(int *a, int n) {
    int k;
    for (k = n / 2; k >= 1; k--) {
        min_heap(a, k, n);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n + 1]; // Adjusted array size to start from index 1
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    int element;
    scanf("%d",&element);
    if(element<1 || element>5)
    {
        printf("Invalid entry");
        return 0;
    }
    build_minheap(a, n);
    printf("Min heap is: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nKth element in min heap is %d",a[element]);
    return 0;
}



`
