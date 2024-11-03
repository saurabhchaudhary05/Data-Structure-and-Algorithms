Madhev is working on a project where he needs to implement a hash table using the linear probing technique to store a collection of keys.



He wants to write a program that takes input for the size of the hash table and a list of keys and then uses linear probing to store the keys in the hash table.



After storing the keys, print the keys in ascending order based on their index in the hash table.



Example



Input 

10

5

20 35 97 60 85

Output 

index: 0, value: 20

index: 1, value: 60

index: 5, value: 35

index: 6, value: 85

index: 7, value: 97



Explanation



Each key is hashed using the modulo operation with the table size, and the initial index is determined. In this case,

20 is hashed to index 0.
35 is hashed to index 5.
97 is hashed to index 7.
60 is hashed to index 0 (collision, linear probing moves to the next index).
85 is hashed to index 5 (collision, linear probing moves to the next available index).


The keys are inserted into the hash table at the computed indices, resolving collisions using linear probing.

20 is inserted at index 0, 35 is inserted at index 5, 97 is inserted at index 7, 60 is inserted at index 1, and 85 is inserted at index 6.



Then print the minimum indices and their corresponding values in ascending order of the indices.

Input format :
The first line of input consists of an integer size, which represents the size of the hash table.

The second line of input consists of an integer n, the number of keys to be inserted.

The third line of input consists of n space-separated integers, representing the keys to be inserted into the hash table.

Output format :
The output displays, for each key, its index in the hash table and its value, in ascending order of the indices, in the following format:

"index: <<index>>, value: <<key>>"



Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

1 = size = 10

1 = n = 10

1 = keys = 100

Sample test cases :
Input 1 :
10
5
20 35 97 60 85
Output 1 :
index: 0, value: 20
index: 1, value: 60
index: 5, value: 35
index: 6, value: 85
index: 7, value: 97
Input 2 :
5
4
29 13 17 15
Output 2 :
index: 0, value: 15
index: 2, value: 17
index: 3, value: 13
index: 4, value: 29


#include <iostream>
using namespace std;

#define SIZE 100

int calHash(int key, int size) {
    return key % size;
}

int main() {
    int size, numKeys;
    cin >> size;
    cin >> numKeys;

    int keys[numKeys];
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; ++i) {
        cin >> keys[i];
    }

    int minIndices[numKeys];

    for (int i = 0; i < numKeys; ++i) {
        int key = keys[i];
        int index = calHash(key, size);

        while (hashTable[index] != -1) {
            index = (index + 1) % size;
        }

        hashTable[index] = key;

        int mIndex = index;
        while (keys[i] != hashTable[mIndex]) {
            mIndex = (mIndex + 1) % size;
        }

        minIndices[i] = mIndex;
    }

    for (int i = 0; i < numKeys; ++i) {
        for (int j = i + 1; j < numKeys; ++j) {
            if (minIndices[i] > minIndices[j]) {
                int temp = minIndices[i];
                minIndices[i] = minIndices[j];
                minIndices[j] = temp;
                temp = keys[i];
                keys[i] = keys[j];
                keys[j] = temp;
            }
        }

        cout << "index: " << minIndices[i] << ", value: " << keys[i] << endl;
    }

    return 0;
}

