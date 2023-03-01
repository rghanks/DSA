#include<iostream>
using namespace std;

class Node{

        public : 
            int data;
            Node *next;

            Node(int data){
                this->data = data;
                this->next = NULL;
            }
};

void insertAtHead(Node* &head, int d){

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node * &tail, int d){

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void traverseNode(Node* &head){

    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    Node *node1 = new Node(10);

    Node *head = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 11);
    insertAtHead(head, 10);
    insertAtHead(head, 9);

    traverseNode(head);

    Node *tail = node1;
    insertAtTail(tail,15);
    insertAtTail(tail,16);
    insertAtTail(tail,17);
    insertAtTail(tail,18);

    traverseNode(head);

    return 0;
}