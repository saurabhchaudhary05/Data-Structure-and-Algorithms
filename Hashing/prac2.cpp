Emma is working on a project where she needs to hash subject names for efficient data organization. She has designed a custom hash function and wants to test it using different subject names. 



Your task is to implement the hash function and help Emma determine the hash values for various subject names.



Note

hashValue = (hashValue * 37) + ch, where 'ch' represents the integer value of the character.
hashValue% HASH_TABLE_SIZE is an operation involving the modulo operator (%).
Input format :
The input consists of strings containing the subject name, separated by a line.

The input continues until Emma enters 'exit' as a string, indicating the end of the input.

Output format :
For each input subject name (excluding 'exit'), the program should output its corresponding hash value calculated using the hash function.

Each hash value should be printed on a new line.

Code constraints :
Hash table size = 1000

Length of the string = 50 characters

Each input string consists of lowercase and uppercase letters

Sample test cases :
Input 1 :
Maths
Science
exit
Output 1 :
505
806


#include <stdio.h>
#include <string.h>

#define HASH_TABLE_SIZE 1000

unsigned int customHash(char* key) {
    unsigned int hashValue = 0;
    
    for (int i = 0; key[i] != '\0'; ++i) {
        hashValue = (hashValue * 37) + key[i];
    }
    
    return hashValue % HASH_TABLE_SIZE;
}

int main() {
    char key[101];
    while (1) {
        scanf("%s", key);

        if (strcmp(key, "exit") == 0) {
            break;
        }

        unsigned int hashValue = customHash(key);
        printf("%u\n", hashValue);
    }

    return 0;
}
