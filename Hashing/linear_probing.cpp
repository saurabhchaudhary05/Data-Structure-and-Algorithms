Rohith works at an airport and is responsible for assigning unique flight IDs to incoming flights. He needs a program to efficiently handle this task. Help him write a program that assigns unique flight IDs using a hash table with linear probing to avoid conflicts.



Rohith is looking for your help in implementing this function using the division method.



Example



Input 

7 

6

12 7 55 9 30 65

Output 

5 0 6 2 3 4 



Explanation



Key 12 is hashed to index 5, and since the slot is unoccupied, it is stored at index 5, resulting in the output "5".
Key 7 is hashed to index 0, stored at index 0, and the output is "0".
Key 55 is hashed to index 6, and as the slot is available, it's stored at index 6, yielding "6".
Key 9 is hashed to index 2, and since the slot is unoccupied, it is stored at index 2, resulting in the output "2".
However, both key 30 and key 65 hash to index 2, leading to the use of linear probing. Key 30 occupies index 2, resulting in the output "3" and key 65 goes to index 2, producing "4".


Note



The given process involves using a hash function to determine the initial index for each key in a hash table, utilizing the modulo operation (key%size).

Input format :
The first line of input consists of an integer N, which represents the size of the hash table.

The second line of input consists of an integer M, which represents the number of flight keys to process.

The third line of input consists of M space-separated integers, representing the flight keys. Each key is a positive integer.

Output format :
The output displays M space-separated integers, each representing the index in the hash table where the flight ID should be stored, based on the hash function using the division method.



Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 = N = 10

1 = M = 1000

Sample test cases :
Input 1 :
7 
6
12 7 55 9 30 65
Output 1 :
5 0 6 2 3 4 
Input 2 :
10
4
123 675 897 234
Output 2 :
3 5 7 4 



#include <stdio.h>

#define SIZE 100

int calHash(int key, int size) {
    return key % size;
}

int main() {
    int size, numKeys;
    scanf("%d", &size);
    scanf("%d", &numKeys);

    int keys[numKeys];
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; ++i) {
        scanf("%d", &keys[i]);
    }

    for (int i = 0; i < numKeys; ++i) {
        int index = calHash(keys[i], size);
        while (hashTable[index] != -1) {
            index = (index + 1) % size;
        }
        hashTable[index] = keys[i];
        printf("%d ", index);
    }

    return 0;
}

