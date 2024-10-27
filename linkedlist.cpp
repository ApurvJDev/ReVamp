#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;       // data stored in the node
        Node* next;     // Pointer to the next node
        
        Node() {
            data = 0;
            next = NULL;
        }

        Node(int data1, Node* next1) { // parameterized constructors
            data = data1;
            next = next1;
        }

        Node(int data1) {
            data = data1;
            next = nullptr;
        }

};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};    
    Node x = Node(arr[0], nullptr);
    cout << x.data << ' ' << x.next << '\n';

    Node* y = &x;
    cout << y->data << ' ' << y->next;

    return 0;
}