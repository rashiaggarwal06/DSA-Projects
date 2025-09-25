#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class CircularLinkedList {
    Node* head;
public:
    CircularLinkedList() { head = nullptr; }
    void insert(int val) {
        Node* newNode = new Node{val, nullptr};
        if(!head) { head = newNode; newNode->next = head; return; }
        Node* temp = head;
        while(temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
    void display() {
        if(!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while(temp != head);
        cout << "(head)\n";
    }
};
int main() {
    CircularLinkedList clist;
    clist.insert(1);
    clist.insert(2);
    clist.insert(3);
    clist.display();
}
