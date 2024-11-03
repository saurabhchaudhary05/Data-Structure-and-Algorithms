Rajesh is a computer science enthusiast who wants to implement a hash table using the mid-square hashing technique to efficiently store a set of integer keys.



He is looking for a program that can handle a specified number of keys and avoid collisions when inserting them into the hash table.



Apply the Mid-Square Hashing algorithm to each key and insert it into the hash table, ensuring that there are no collisions. If a collision occurs, use linear probing to find the next available slot.



Note:



The Mid-Square Hashing algorithm is as follows:

Square the key.
Extract the middle two digits of the square. For example, if the square is 16384, you should take 38 (84 is in the middle).
Perform a modulo operation with the table size (100) to obtain the hash index.
The formula (squared / 100) extracts the last two digits, while % 100 ensures middleDigit falls within 0 to 99, obtaining a valid hash index.
Input format :
The first line of input consists of an integer, n, representing the number of keys to insert.

The second line of input consists of n space-separated integers, each representing a key.

Output format :
The output displays, for each non-empty slot in the hash table, the format "Index [index]: Key [key]".



Refer to the sample output for the exact text and format.

Code constraints :
table size = 100

1 <= n <= 10

100 <= keys <= 1000

Linear probing should be used to handle collisions, meaning the next available slot is chosen if the calculated hash index is already occupied.

Sample test cases :
Input 1 :
5
350 400 450 500 550
Output 1 :
Index 0: Key 400
Index 1: Key 500
Index 25: Key 350
Index 26: Key 450
Index 27: Key 550
Input 2 :
8
102 103 453 768 329 786 329 786
Output 2 :
Index 4: Key 102
Index 6: Key 103
Index 52: Key 453
Index 77: Key 786
Index 78: Key 786
Index 82: Key 329
Index 83: Key 329
Index 98: Key 768


#include <stdio.h>

#define TABLE_SIZE 100

int hashTable[TABLE_SIZE];

int midSquareHash(int key) {
    int square = key * key;
    int middleDigits = (square / 100) % 100;
    return middleDigits % TABLE_SIZE;
}

int insert(int key) {
    int index = midSquareHash(key);

    if (hashTable[index] == 0) {
        hashTable[index] = key;
        return index;
    }

    // Linear probing to find the next available slot
    int newIndex = (index + 1) % TABLE_SIZE;
    while (newIndex != index) {
        if (hashTable[newIndex] == 0) {
            hashTable[newIndex] = key;
            return newIndex;
        }
        newIndex = (newIndex + 1) % TABLE_SIZE;
    }

    // Table is full
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int key;
        scanf("%d", &key);

        int index = insert(key);
    }

    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != 0) {
            printf("Index %d: Key %d\n", i, hashTable[i]);
        }
    }

    return 0;
}

