#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* deletionfromhead(Node* head){
    if (head == NULL || head->next == NULL) {
        // cout << "List is empty, nothing to delete." << endl;
        return NULL;
    }

    
    Node* temp = head;
    head = head->next;  // Move head to the next node
    head->prev = nullptr;  // Set the previous pointer of the new head to nullptr
    temp->next = nullptr;  // Clear the next pointer of the old head
    delete temp;  // Free the memory of the old head
    return head;
}

Node* deletionfromtail(Node* head){
    if (head == NULL || head->next == NULL) {
        // cout << "List is empty, nothing to delete." << endl;
        return NULL;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newtail = temp->prev;  // Get the second last node
    newtail->next = nullptr;  // Clear the next pointer of the second last node
    temp->prev = nullptr;  // Clear the previous pointer of the last node
    delete temp;  // Free the memory of the last node
    return head;
}

Node* deletionfrommiddle(Node* head, int key){
    Node* temp = head;
    while(temp != nullptr && temp->data != key){
        temp = temp->next;  // Traverse to find the node with the given key
    }
    if(temp == nullptr) {
        return head;  // Key not found, return original head
    }
    if(temp->prev != nullptr) {
        temp->prev->next = temp->next;  // Link the previous node to the next node
    } else {
        head = temp->next;  // If deleting the head, update head
    }
    if(temp->next != nullptr) {
        temp->next->prev = temp->prev;  // Link the next node to the previous node
    }
    temp->next = nullptr;  // Clear the next pointer of the deleted node
    temp->prev = nullptr;  // Clear the previous pointer of the deleted node
    delete temp;  // Free the memory of the deleted node
    return head;  // Return the updated head
}

Node* deletekthindex(Node* head, int k){
    if (head == NULL || k < 0) {
        return NULL;  // If the list is empty or k is invalid, return the original head
    }
    Node* temp = head;
    int count = 0;
    while(temp != nullptr && count < k){
        count++;
        if(count == k){
            if(temp->prev != nullptr) {
                temp->prev->next = temp->next;  // Link the previous node to the next node
            } else {
                head = temp->next;  // If deleting the head, update head
            }
            if(temp->next != nullptr) {
                temp->next->prev = temp->prev;  // Link the next node to the previous node
            }
            delete temp;  // Free the memory of the deleted node
            return head;  // Return the updated head
        }
        temp = temp->next;
    }
    return head;
}

Node* convertarrtoDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;                   // previous node to temp will play key role in pointing pointers 
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;            // because we are inserting at the end head's next isn't initialized yet
        prev = temp;
    }
    return head;
}    

void print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertarrtoDLL(arr);
    
    // Example of deletion from head (not implemented yet)
    // deletionfromhead(head);
    // deletionfromtail(head);
    deletionfrommiddle(head, 3); // Assuming a function to delete from middle exists
    deletekthindex(head, 3); // Assuming a function to delete from kth index exists
    print(head);
    
    return 0;
}