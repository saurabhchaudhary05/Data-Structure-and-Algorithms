#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = new Node();
    if (!newNode) {
        return NULL;
    }
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void postorder(struct Node *root){
		if(root==0){
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}

int main() {
    Node* root = NULL;
    int numNodes, value, key;

    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        cin >> value;
        root = insertNode(root, value);
    }

    postorder(root);

    
    return 0;
}





