#include <bits/stdc++.h>
using namespace std;
struct Node {
    char val;
    Node* left;
    Node* right;
    Node(char v){ val=v; left=right=nullptr;}
};
bool isOperator(char c){
    return c=='+'||c=='-'||c=='*'||c=='/';
}
Node* constructTree(string postfix){
    stack<Node*> st;
    for(char c: postfix){
        if(!isOperator(c)) st.push(new Node(c));
        else{
            Node* op = new Node(c);
            op->right=st.top(); st.pop();
            op->left=st.top(); st.pop();
            st.push(op);
        }
    }
    return st.top();
}
void inorder(Node* root){
    if(!root) return;
    if(isOperator(root->val)) cout << "(";
    inorder(root->left);
    cout << root->val;
    inorder(root->right);
    if(isOperator(root->val)) cout << ")";
}
int main() {
    string postfix = "ab+cde+**";
    Node* root = constructTree(postfix);
    cout << "Infix expression: ";
    inorder(root); cout << endl;
}
