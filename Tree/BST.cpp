#include <bits/stdc++.h>
using namespace std;
struct Node { 
    int data;
    Node* left;
    Node* right; 
};
Node* insert(Node* root, int val) {
    if(!root) return new Node{val, nullptr, nullptr};
    if(val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}
void inorder(Node* root) {
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node* search(Node* root, int key) {
    if(!root || root->data == key) return root;
    if(key < root->data) return search(root->left, key);
    return search(root->right, key);
}
int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    int key = 60;
    if(search(root, key)) cout << key << " found in BST\n";
    else cout << key << " not found in BST\n";
}
