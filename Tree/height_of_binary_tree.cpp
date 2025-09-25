#include <bits/stdc+.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
int height(Node* root) {
    if(!root) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r) + 1;
}
int main() {
    Node* root = new Node{1,nullptr,nullptr};
    root->left = new Node{2,nullptr,nullptr};
    root->right = new Node{3,nullptr,nullptr};
    root->left->left = new Node{4,nullptr,nullptr};
    root->left->right = new Node{5,nullptr,nullptr};

    cout << "Height of the tree: " << height(root) << endl;
}
