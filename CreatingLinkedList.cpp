#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void printList(Node* head) {
    Node* curr = head; // using curr for traversal
    while(curr) {
        cout << curr->data << ' ';
        curr = curr->next;
    }
}

void appendNode(Node*& head, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) { // if there is no head, new Node becomes head
        head = newNode;
    } 
    else {
        Node* curr = head;
        while(curr->next != nullptr) { // get the current tail node
            curr = curr->next;
        }
        curr->next = newNode; // link tail node to new node
    }
}

int main() {
    Node* head = nullptr;
    
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    printList(head);

    return 0;
}