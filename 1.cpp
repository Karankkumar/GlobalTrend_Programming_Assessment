#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;   
    Node* next;      
    
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* reverseLL(Node *head)
{
    Node* temp = head;  
    Node* prev = NULL;  
   
    while(temp != NULL){  
      Node* nextnode = temp->next;  
       temp->next = prev;  
       prev = temp;  
       temp = nextnode; 
   }
   
   return prev;  
}


void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(7);
    head->next->next = new Node(2);
    head->next->next->next = new Node(41);

    
    cout << "Original Linked List: ";
    print(head);
    
    head = reverseLL(head);
    cout << "Reversed Linked List: ";
    print(head);

    return 0;
}
