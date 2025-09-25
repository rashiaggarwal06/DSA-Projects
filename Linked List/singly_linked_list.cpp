// Program to insert, delete and Display in the Singly Linked List
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class SinglyLinkedList {
    Node* head;
public:
    SinglyLinkedList() { head = nullptr; }

    void insert(int val) {
        Node* newNode = new Node{val, nullptr};
        if (!head) { head = newNode; return; }
        Node* temp = head;
        while(temp->next) temp = temp->next;
        temp->next = newNode;
    }
    void display() {
        Node* temp = head;
        while(temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void deleteValue(int val) {
        if (!head) return;
        if (head->data == val) { 
            Node* temp = head; 
            head = head->next; 
            delete temp; 
            return; 
        }
        Node* temp = head;
        while(temp->next && temp->next->data != val) temp = temp->next;
        if(temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
};
int main() {
    SinglyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.deleteValue(20);
    list.display();
}
