Sharon is tasked with implementing a simple hash table using quadratic probing to handle collisions.



The hash table will have a fixed size of 10, and she needs to read a set of integer keys from the user, hash them into the table using quadratic probing, and then display the contents of the hash table.



Implement a hash function that calculates the hash index for each key using the modulo operation with the table size (10). The hash index should be calculated as follows: hashIndex = key % tableSize.

Input format :
The first line of input consists of an integer N, representing the number of keys to be inserted.

The second line consists of N space-separated integers, each representing a key to be inserted into the hash table.

Output format :
The output prints the values that have been successfully inserted into the hash table.

Code constraints :
table size = 10

Sample test cases :
Input 1 :
5
41 52 63 95 83
Output 1 :
41 52 63 83 95 


#include <stdio.h>
int main() {
    
    int tableSize = 10;
    int numKeys,i;
    scanf("%d", &numKeys);
    int keys[numKeys];
    for ( i = 0; i < numKeys; i++) {
        scanf("%d", &keys[i]);
    }
    int hashTable[tableSize];
    for ( i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }
    for ( i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = key % tableSize;
        int j = 0;
        while (hashTable[hashIndex] != -1) 
        {
            j++;
            hashIndex = (hashIndex + j * j) % tableSize;
        }
        hashTable[hashIndex] = key;
    }
    for ( i = 0; i < tableSize; i++) {
        if(hashTable[i]!=-1)
        printf("%d ",hashTable[i]);
    }
}
