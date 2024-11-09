#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
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
        newNode->prev = curr; // newNode points to former tail node
    }
}

void deleteAllOccurences(int val, Node* head) {
    Node *curr = head;
        
    while(curr) {
        if(curr->data == val) {
                
            if(curr->prev != NULL) {  // check prev node
                curr->prev->next = curr->next;  // adjust ptr
            }
            else {                  //  deleting first node
                head = curr->next;
            }
            
            if(curr->next != NULL) {
                curr->next->prev = curr->prev; // adjust ptr
            }
        }
        curr = curr->next;
    }
    return;
}

int main() {
    Node* head = nullptr;
    
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 2);
    appendNode(head, 3);

    printList(head);

    deleteAllOccurences(2, head);
    cout << '\n';
    printList(head);

    return 0;
}