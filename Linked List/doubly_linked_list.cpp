#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList() { head = nullptr; }

    void insert(int val) {
        Node* newNode = new Node{val, nullptr, nullptr};
        if(!head) { head = newNode; return; }
        Node* temp = head;
        while(temp->next) temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    void displayForward() {
        Node* temp = head;
        while(temp) { cout << temp->data << " -> "; temp = temp->next; }
        cout << "NULL\n";
    }
    void displayBackward() {
        Node* temp = head;
        if(!temp) return;
        while(temp->next) temp = temp->next;
        while(temp) { cout << temp->data << " -> "; temp = temp->prev; }
        cout << "NULL\n";
    }
};
int main() {
    DoublyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    cout << "Forward: ";
    list.displayForward();
    cout << "Backward: ";
    list.displayBackward();
}
