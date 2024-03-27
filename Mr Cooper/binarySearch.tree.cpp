#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newnode(int item) {
    Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

Node* insert(Node* node, int key) {
    if (node == NULL) {
        return newnode(key);
    }

    if (key < node->data) {
        node->left = insert(node->left, key);
    } else {
        node->right = insert(node->right, key);
    }
    
    return node;
}

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;

    return 0;
}
