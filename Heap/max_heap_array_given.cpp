#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void max_heap(int *a, int m, int n) {
    int j, t;
    t = a[m];
    j = 2 * m;
    while (j <= n) {
        if (j < n && a[j + 1] > a[j])
            j = j + 1;
        if (t > a[j])
            break;
        else if (t <= a[j]) {
            a[j / 2] = a[j];
            j = 2 * j;
       swap(a[j],t);
        }
    }
	a[j / 2] = t;
}
void build_maxheap(int *a, int n) {
    int k;
    for (k = n / 2; k >= 1; k--) {
        max_heap(a, k, n);
    }
}
int main() {
    int n, i;
    scanf("%d", &n);
    int a[n + 1]; // Adjusted array size to start from index 1
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    build_maxheap(a, n);
    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
/*Jagan is tasked with creating a task scheduler for his system programming project. The tasks have a running time associated with them. When there is an issue with the execution of the tasks, he needs to analyze them, and the one with the longest running time needs to be forced to exit.



Help Jagan automate the task by taking in the times of various tasks and arranging them in a max-heap format, which will help him identify the longest-running task easily.



Note: This kind of question will be helpful in clearing TCS recruitment.

Input format :
The first line of your input consists of an integer n, which represents the total number of inputs.

The second line consists of the n integer values, separated by a space.

Output format :
The output displays the given input data in max heap order.

Code constraints :
n > 0

Sample test cases :
Input 1 :
5
2 4 1 5 9
Output 1 :
9 5 1 2 4 */
