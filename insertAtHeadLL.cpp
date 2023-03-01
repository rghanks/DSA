#include<iostream>
using namespace std;

class node{
    public:
       int data;
       node* next;

       node(int data){
        this->data = data;
        next = NULL;
       }
};

void inserAtHead(node* &head,int data){
    if(head == NULL){
        head = new node(data);
        return;
    }

    node* n = new node(data);
    n->next = head;
    head = n;    
}

void insetAtMiddleLL(node* &head,int data, int pos){
    if(pos == 0){
        inserAtHead(head, data);
    }else{

        node* temp = head;
        node* n = new node(data);

        for(int i=1; i<= pos-1; i++){
            temp = temp->next;
        }

        n->next = temp->next;
        temp->next = n;
    }

}




void printLinkedList(node* head){
    while(head != NULL){
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    node* head = NULL;
    inserAtHead(head,4);
    inserAtHead(head,3);
    inserAtHead(head,2);
    inserAtHead(head,1);
    inserAtHead(head,0);

    insetAtMiddleLL(head,10,3);

    printLinkedList(head);

    return 0;
}