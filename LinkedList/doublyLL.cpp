#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* back;
    Node* next;

    Node(int value, Node* next1, Node* back1) {
        data = value;
        back = back1;
        next = next1;
    }

    Node(int value) {
        data = value;
        back = nullptr;
        next = nullptr;
    }
};

Node* arrToLL(vector<int> arr) {
    if(arr.empty()) return nullptr;     // check if the array is empty

    Node* head = new Node(arr[0]);
    Node* curr = head;                  // curr is used for traversal

    for(int i = 1; i < arr.size(); i++) {
        curr->next = new Node(arr[i]);  // new Node created
        curr->next->back = curr;        // back ptr of new Node should point to current Node
        curr = curr->next;
    }
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    Node* ans = arrToLL(arr);
    while(ans) {
        cout << ans->data << ' ';
        ans = ans->next;
    }

    return 0;
}