#include <stdio.h>
#include <stdlib.h>

// Define the TreeNode structure
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new TreeNode
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode != NULL) {
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

// Function to perform a reverse in-order traversal and find the kth largest element
void kthLargestUtil(struct TreeNode* root, int k, int* count, int* result) {
    if (root == NULL || *count >= k) {
        return;
    }

    // Recursively traverse the right subtree
    kthLargestUtil(root->right, k, count, result);

    // Increment the count
    (*count)++;

    // If count reaches k, store the result
    if (*count == k) {
        *result = root->val;
        return;
    }

    // Recursively traverse the left subtree
    kthLargestUtil(root->left, k, count, result);
}

// Function to find the kth largest element in the BST
int kthLargest(struct TreeNode* root, int k) {
    int count = 0;
    int result = 0;
    kthLargestUtil(root, k, &count, &result);
    return result;
}

// Function to build a BST from user input
struct TreeNode* buildBST() {
    int val;
    struct TreeNode* root = NULL;

    while (1) {
        scanf("%d", &val);

        if (val == -1) {
            break;
        }

        if (root == NULL) {
            root = createNode(val);
        } else {
            // Insert the value into the BST
            struct TreeNode* current = root;
            while (1) {
                if (val < current->val) {
                    if (current->left == NULL) {
                        current->left = createNode(val);
                        break;
                    }
                    current = current->left;
                } else {
                    if (current->right == NULL) {
                        current->right = createNode(val);
                        break;
                    }
                    current = current->right;
                }
            }
        }
    }

    return root;
}

// Function to free the memory of the tree
/*void freeTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}*/

int main() {
    // Build a binary search tree from user input
    struct TreeNode* root = buildBST();

    int k;
    scanf("%d", &k);

    int kth_largest = kthLargest(root, k);
    printf("%d", kth_largest);

    // Clean up memory
    free (root);

    return 0;
}

/*You are preparing for a technical interview with a well-known tech company. During a mock interview, you are presented with a coding challenge related to Binary Search Trees (BSTs). 



The challenge is to write a program that finds the kth largest element in a BST, and you are required to implement an efficient solution. 



Your task is to complete the code and ensure that it correctly identifies the kth largest element for the given input tree.

Input format :
The first line of input consists of a sequence of integers representing the elements of the BST. The input is terminated by -1.

The second line consists of an integer k, representing the position of the desired largest element.

Output format :
The output prints a single integer, which is the kth largest element in the BST.

Sample test cases :
Input 1 :
10 5 20 3 7 15 25 -1
2
Output 1 :
20
Input 2 :
45 30 60 20 35 55 70 15 25 40 50 58 65 75 -1
11
Output 2 :
30*/