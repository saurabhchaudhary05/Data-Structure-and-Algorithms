Josh is a software developer working on a project that involves hashing and storing soup prices in a hash table.



He needs to implement a hashing algorithm known as the Mid-Square method with linear probing for collision resolution.



Your task is to help Josh by writing a program that takes a list of soup prices, hashes them using the Mid-Square method, resolves collisions using linear probing, and calculates the sum of even-indexed soup prices.



Note

The formula (squared / 10) extracts the last two digits, and % 100 ensures middleDigit is within 0 to 99, limiting the hash index to the table size.

Input format :
The first line of input consists of an integer N, representing the number of types of soups.

The second line of input consists of N space-separated, representing the price of each soup.

Output format :
The output displays two types of lines.

For each successfully hashed soup price, it should print "Index X: Key Y" where X is the index in the hash table and Y is the soup price.
Finally, the program should print "Sum of even indexed soup price: Z" where Z is the sum of soup prices at even-indexed positions in the hash table.


Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

tableSize, is fixed at 100.

1 <= N <= 10

10 <= price <= 100

Sample test cases :
Input 1 :
5
80 50 60 70 40
Output 1 :
Index 40: Key 80
Index 50: Key 50
Index 60: Key 60
Index 61: Key 40
Index 90: Key 70
Sum of even indexed soup price: 260
Input 2 :
6
15 80 96 37 26 49
Output 2 :
Index 21: Key 96
Index 22: Key 15
Index 36: Key 37
Index 40: Key 80
Index 41: Key 49
Index 67: Key 26
Sum of even indexed soup price: 132



#include <stdio.h>

int midSquareHash(int key, int tableSize) {
    int squared = key * key;
    int middleDigits = (squared / 10) % 100; 
    
    return middleDigits % tableSize;
}

int linearProbe(int hashTable[], int tableSize, int index) {
    while (hashTable[index] != -1) {
        index = (index + 1) % tableSize;
    }
    return index;
}

int main() {
    int tableSize = 100;
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
        int hashIndex = midSquareHash(key, tableSize);

        hashIndex = linearProbe(hashTable, tableSize, hashIndex);

        hashTable[hashIndex] = key;
    }

    int sum = 0;
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            printf("Index %d: Key %d\n", i, hashTable[i]);
        }
    }
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            if (i % 2 == 0) {
                sum += hashTable[i];
            }
        }
    }
    printf("Sum of even indexed soup price: %d", sum);
}


