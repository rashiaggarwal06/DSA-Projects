#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
bool isPalindrome(Node* head) {
    stack<int> s;
    Node* temp = head;
    while(temp) { s.push(temp->data); temp = temp->next; }
    temp = head;
    while(temp) {
        if(temp->data != s.top()) return false;
        s.pop();
        temp = temp->next;
    }
    return true;
}
int main() {
    Node* head = new Node{1, new Node{2, new Node{2, new Node{1, nullptr}}}};
    if(isPalindrome(head)) cout << "Palindrome\n";
    else cout << "Not Palindrome\n";
}
