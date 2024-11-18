// C++ program for postorder traversal of a binary tree from an array
#include <iostream>
using namespace std;

// A node structure for binary tree
struct Node {
  int data; // the value of the node
  Node* left; // pointer to the left child
  Node* right; // pointer to the right child
};

// A function to create a new node with a given value
Node* newNode(int value) {
  Node* node = new Node(); // allocate memory for the node
  node->data = value; // assign the value to the node
  node->left = NULL; // initialize the left child as NULL
  node->right = NULL; // initialize the right child as NULL
  return node; // return the node
}

// A function to construct a binary tree from an array
Node* constructTree(int arr[], int n, int i) {
  if (i >= n) { // if the index is out of bounds, return NULL
    return NULL;
  }
  Node* root = newNode(arr[i]); // create a new node with the value at index i
  root->left = constructTree(arr, n, 2 * i + 1); // recursively construct the left subtree from the left child index
  root->right = constructTree(arr, n, 2 * i + 2); // recursively construct the right subtree from the right child index
  return root; // return the root of the subtree
}

// A function to print the postorder traversal of the binary tree
void printPostorder(Node* root) {
  if (root == NULL) { // if the tree is empty, return
    return;
  }
  printPostorder(root->left); // print the left subtree in postorder
  printPostorder(root->right); // print the right subtree in postorder
  cout << root->data << " "; // print the root data
}

// The main function 
int main() {
  int n; // variable to store the number of nodes in the binary tree
//  cout << "Enter the number of nodes: ";
  cin >> n; // read the number of nodes from user input

  int arr[n]; // array to store the values of the nodes in the binary tree
//  cout << "Enter " << n << " space-separated integers: ";
  for (int i = 0; i < n; i++) { // read n integers from user input and store them in the array
    cin >> arr[i];
  }

  Node* root = constructTree(arr, n, 0); // construct the binary tree from the array using index 0 as root

  //cout << "Postorder traversal of binary tree is: \n";
  printPostorder(root); // print the postorder traversal of the binary tree

  return 0; // return success code 
}

