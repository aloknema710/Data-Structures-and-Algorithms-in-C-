#include<bits/stdc++.h>
using namespace std;

// Node structure for the linked list
struct Node {               // we can say struct or class is a blueprint for creating nodes
    int data;               // data part of the node
    Node* next;             // pointer to the next node in the linked list
    Node(int data1 , Node* next1){          // constructor to initialize the node
        data = data1;                       // initialize data with the given value 
        next = next1;                  // initialize next pointer with the given pointer
    }
};
    
int main() {
    // Creating the first node with data 10 and next pointing to nullptr
    vector<int> arr = {10, 20, 30, 40, 50};
    Node* head = new Node(arr[0], nullptr);          // new Node with first element is created in heap memory
    Node* mover = head;                              // mover is used to traverse the linked list

    for(int i = 1; i < arr.size(); i++) {
        // Creating a new node for each element in the array
        mover->next = new Node(arr[i], nullptr);
        mover = mover->next; // Move to the next node          // -> mover is now pointing to the newly created node
                                //  therefore, allowing us to access member of the newly created node/object that is pointed to by a pointer.
    }
    // Printing the linked list
    mover = head; // Reset mover to head
    while(mover != nullptr) {
        cout << mover->data << " ";
        mover = mover->next; // Move to the next node
    }
    cout << endl;
}