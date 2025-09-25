#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
Node* LCA(Node* root, int n1, int n2) {
    if(!root) return nullptr;
    if(root->data==n1 || root->data==n2) return root;
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);
    if(left && right) return root;
    return (left!=nullptr)? left:right;
}
int main() {
    Node* root = new Node{3,nullptr,nullptr};
    root->left = new Node{5,nullptr,nullptr};
    root->right = new Node{1,nullptr,nullptr};
    root->left->left = new Node{6,nullptr,nullptr};
    root->left->right = new Node{2,nullptr,nullptr};
    root->right->left = new Node{0,nullptr,nullptr};
    root->right->right = new Node{8,nullptr,nullptr};

    int n1=6, n2=2;
    Node* lca = LCA(root,n1,n2);
    if(lca) cout << "LCA of " << n1 << " and " << n2 << " is " << lca->data << endl;
}
