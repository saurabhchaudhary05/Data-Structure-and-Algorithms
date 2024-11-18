#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to create a new BST node
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to perform an in-order traversal and find the kth smallest element
void kthSmallestUtil(struct TreeNode* root, int k, int* count, int* result) {
    if (root == NULL || *count >= k) {
        return;
    }

    // Recursively traverse the left subtree
    kthSmallestUtil(root->left, k, count, result);

    // Increment the count
    (*count)++;

    // If count reaches k, store the result
    if (*count == k) {
        *result = root->val;
        return;
    }

    // Recursively traverse the right subtree
    kthSmallestUtil(root->right, k, count, result);
}

// Function to find the kth smallest element in the BST
int kthSmallest(struct TreeNode* root, int k) {
    int count = 0;
    int result = 0;
    kthSmallestUtil(root, k, &count, &result);
    return result;
}

// Function to build a BST from user input
struct TreeNode* buildBST() {
    int val;
    struct TreeNode* root = NULL;

    while (1) {
        //printf("Enter a value (or -1 to stop): ");
        scanf("%d", &val);

        if (val == -1) {
            break;
        }

        if (root == NULL) {
            root = newNode(val);
        } else {
            // Insert the value into the BST
            struct TreeNode* current = root;
            while (1) {
                if (val < current->val) {
                    if (current->left == NULL) {
                        current->left = newNode(val);
                        break;
                    }
                    current = current->left;
                } else {
                    if (current->right == NULL) {
                        current->right = newNode(val);
                        break;
                    }
                    current = current->right;
                }
            }
        }
    }

    return root;
}

int main() {
    // Build a binary search tree from user input
    struct TreeNode* root = buildBST();

    int k;
    //printf("Enter the value of k: ");
    scanf("%d", &k);

    int kth_smallest = kthSmallest(root, k);
    printf("%d", kth_smallest);

    // Clean up memory
    free(root);

    return 0;
}
