Harish is working on implementing a hash table with collision resolution using the division method.



He needs your help to write a program that takes a series of integer keys, hashes them into a table, resolves collisions by linear probing, and then finds and reports the middle element from the table.



You are required to create a program to assist Harish in this task.

Input format :
The first line of input consists of an integer, n, indicating the number of keys to be inserted into the hash table.

The second line of input consists of n space-separated integers, representing the keys to be inserted.

Output format :
The output displays two types in the following format:



For each non-empty slot in the hash table, print "Index i: x", where i is the index and x is the key stored at that index.
Finally, print "Middle Index: i, Middle Value: x", where i is the index of the middle element and x is the value of the middle element.
Code constraints :
table size = 10

n should be odd.

Sample test cases :
Input 1 :
5
2000 3000 3553 4233 3122
Output 1 :
Index 0: 2000
Index 1: 3000
Index 2: 3122
Index 3: 3553
Index 4: 4233
Middle Index: 2, Middle Value: 3122
Input 2 :
7
1245 2365  4125 3215 5214 4658 2314
Output 2 :
Index 0: 2314
Index 4: 5214
Index 5: 1245
Index 6: 2365
Index 7: 4125
Index 8: 3215
Index 9: 4658
Middle Index: 6, Middle Value: 2365


#include <stdio.h>

int myHash(int key, int tableSize) {
    return key % tableSize;
}

int main() {
    int tableSize = 10;
    int numKeys;
    scanf("%d", &numKeys);

    int keys[numKeys];
    for (int i = 0; i < numKeys; i++) {
        scanf("%d", &keys[i]);
    }

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = myHash(key, tableSize);

        while (hashTable[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % tableSize;
        }

        hashTable[hashIndex] = key;
    }

    int mid = (numKeys / 2) + 1;
    int middleIndex, middleValue;
    int c = 0;

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            c++;
            if (c == mid) {
                middleIndex = i;
                middleValue = hashTable[i];
            }
            printf("Index %d: %d\n", i, hashTable[i]);
        }
    }

    printf("Middle Index: %d, Middle Value: %d", middleIndex, middleValue);

    return 0;
}

