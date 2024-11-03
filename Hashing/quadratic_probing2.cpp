Imagine you have started a high-class hotel. The menu card contains N dishes, and each dish has been priced uniquely. Use quadratic probing to store and retrieve the dish price in an optimized manner.



Write the code to retrieve the price of the dishes in prime positions after hashing. For each dish's price, calculate a hash index using the modulo operation (% tableSize).

Input format :
The first line of input consists of an integer N, representing the number of dishes.

The second line consists of N space-separated integers, representing the price of each dish.

Output format :
The output prints the prices of the dishes in prime positions.

If there is no dish that is placed in prime position after hashing, print "No dish is placed in prime position"



Refer to the sample output for the exact text and format.

Code constraints :
tableSize = 10

Sample test cases :
Input 1 :
5
12 32 45 90 156
Output 1 :
The price of the dish in prime position: 2 is Rs.12
The price of the dish in prime position: 3 is Rs.32
The price of the dish in prime position: 5 is Rs.45
Input 2 :
3
14 56 88
Output 2 :
No dish is placed in prime position


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
    int j,f=0;
    for ( i = 0; i < tableSize; i++) {
        if(hashTable[i]!=-1)
        {
            int c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                printf("The price of the dish in prime position: %d is Rs.%d\n",i,hashTable[i]);
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("No dish is placed in prime position");
    }
}
