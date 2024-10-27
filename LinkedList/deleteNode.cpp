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

void deleteNode(Node*& head, int value) {
    if(head == NULL) return;    // check if the list is empty
    
    if(head->data == value) {   // check if node to delete is the head node
        Node* temp = head;
        head = head->next;
        delete temp; // to free up memory
        return;    
    }

    Node* curr = head;
    Node* prev = nullptr;
    while(curr && curr->data != value) {   // traverse the list to find the node to delete
        prev = curr;
        curr = curr->next;
    }
    if(curr == NULL) return;    // value not found 

    prev->next = curr->next;    // adjust the pointers
    delete curr;
}

int main() {
    Node* head = nullptr;
    
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 4);
    appendNode(head, 5);
    appendNode(head, 6);

    printList(head);

    deleteNode(head, 3);

    printList(head);

    return 0;
}