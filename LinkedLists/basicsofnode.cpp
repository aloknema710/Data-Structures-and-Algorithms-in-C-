#include<bits/stdc++.h>
using namespace std;

class Node {               // we can say struct or class is a blueprint for creating nodes
public:    
    int data;               // data part of the node
    Node* next;             // pointer to the next node in the linked list
    Node(int data1 , Node* next1){          // constructor to initialize the node
        data = data1;                       // initialize data with the given value 
        next = next1;                  // initialize next pointer with the given pointer
    }
    Node(int data1){
        data = data1;                       // initialize data with the given value 
        next = nullptr;                  // initialize next pointer to nullptr
    }
};

Node* convert_to_ll(vector<int> &arr){
    Node* head = new Node(arr[0]); // Create the head node with the first element of the array
    Node* mover = head;             // mover is used to traverse the linked list
    for(int i = 1; i < arr.size(); i++) {
        // Node* temp = new Node(arr[i]); // Create a new node with the current element
        // mover->next = temp; // Link the new node to the current end of the list
        // mover = mover->next; // Move to the next node
        // Alternatively, we can do it in one line
        mover->next = new Node(arr[i]); // Create a new node for each element in the array
        mover = mover->next;             // Move to the next node
    }
    return head; // Return the head of the linked list
}

int length_of_ll(Node* head) {
    int length = 0; // Initialize length to 0
    Node* mover = head; // Start from the head of the linked list
    while(mover != nullptr) { // Traverse until we reach the end of the list
        length++; // Increment length for each node
        mover = mover->next; // Move to the next node
    }
    return length; // Return the total length of the linked list
}

bool is_elem_present(Node* head, int elem) {
    Node* mover = head; // Start from the head of the linked list
    while(mover != nullptr) { // Traverse until we reach the end of the list
        if(mover->data == elem) { // Check if the current node's data matches the element
            return true; // Element is present ...1
        }
        mover = mover->next; // Move to the next node
    }
    return false; // Element is not present in the linked list ...0
}

int main(){
    vector<int > arr = {10, 20, 30, 40, 50};
    Node* head = convert_to_ll(arr); // Assuming convert_to_ll is a function that converts the vector to a linked list
    cout << "Linked List: ";// print the linked list
    Node* mover = head; // Reset mover to head
    while(mover != nullptr) {
        cout << mover->data << " ";
        mover = mover->next; // Move to the next node
    }
    cout << endl;
    cout << "Length of Linked List: " << length_of_ll(head) << endl; // Print the length of the linked list
    int elem = 30; // Element to search in the linked list
    if(is_elem_present(head, elem)) { // Check if the element is present in the linked list
        cout << "Element " << elem << " is present in the linked list." << endl; // Element is present
    } else {
        cout << "Element " << elem << " is not present in the linked list." << endl; // Element is not present
    }
    // Free the allocated memory for the linked list    
    mover = head; // Reset mover to head
    while(mover != nullptr) {
        Node* temp = mover; // Store the current node
        mover = mover->next; // Move to the next node
        delete temp; // Free the memory of the current node
    }
    cout << "Memory freed successfully." << endl; // Indicate that memory has been freed
}