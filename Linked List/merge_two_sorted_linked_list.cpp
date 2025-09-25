#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* mergeSorted(Node* l1, Node* l2) {
    if(!l1) return l2;
    if(!l2) return l1;
    if(l1->data < l2->data) {
        l1->next = mergeSorted(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeSorted(l1, l2->next);
        return l2;
    }
}
void display(Node* head) {
    while(head) { cout << head->data << " -> "; head = head->next; }
    cout << "NULL\n";
}
int main() {
    Node* l1 = new Node{1, new Node{3, new Node{5, nullptr}}};
    Node* l2 = new Node{2, new Node{4, new Node{6, nullptr}}};
    Node* merged = mergeSorted(l1, l2);
    display(merged);
}
