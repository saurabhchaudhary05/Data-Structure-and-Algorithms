// C++ program for BST operations
#include <iostream>
using namespace std;

// A node structure for BST
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

// A function to insert a new node with a given value in the BST
Node* insert(Node* root, int value) {
  if (root == NULL) { // if the tree is empty, create a new node as root
    return newNode(value);
  }
  if (value < root->data) { // if the value is less than the root, insert in the left subtree
    root->left = insert(root->left, value);
  }
  else if (value > root->data) { // if the value is more than the root, insert in the right subtree
    root->right = insert(root->right, value);
  }
  // if the value is equal to the root, do nothing (no duplicates allowed)
  return root; // return the root of the modified tree
}

// A function to print the postorder traversal of the BST
void printPostorder(Node* root) {
  if (root == NULL) { // if the tree is empty, return
    return;
  }
  printPostorder(root->left); // print the left subtree in postorder
  printPostorder(root->right); // print the right subtree in postorder
  cout << root->data << " "; // print the root data
}

// A function to calculate the sum of all nodes in the BST
int sumNodes(Node* root) {
  if (root == NULL) { // if the tree is empty, return zero
    return 0;
  }
  int leftSum = sumNodes(root->left); // calculate the sum of left subtree recursively
  int rightSum = sumNodes(root->right); // calculate the sum of right subtree recursively
  int totalSum = leftSum + rightSum + root->data; // calculate the total sum by adding left, right and root values
  return totalSum; // return the total sum
}

// The main function 
int main() {
  Node* root = NULL; // initialize the root of the BST as NULL
  int n, value; // variables to store user input

 // cout << "Enter the number of elements: ";
  cin >> n; // read number of elements

//  cout << "Enter " << n << " space-separated elements: ";
  for (int i = 0; i < n; i++) { // read n elements and insert them in BST
    cin >> value;
    root = insert(root, value);
  }

  cout << "Post-order traversal: ";
  printPostorder(root); // print the postorder traversal of BST

  cout << "\nSum of all nodes: ";
  cout << sumNodes(root); // print the sum of all nodes in BST

  return 0; // return success code 
}

