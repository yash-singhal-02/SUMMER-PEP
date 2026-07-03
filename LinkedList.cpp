#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};
//Singly Linked List
void insertAtEnd(Node* &head,int val){
    Node* node = new Node(val);
    if(head==NULL){
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}
void insertatBeg(Node* &head, int val){
    Node* node = new Node(val);
    node->next = head;
    head = node;
}
void printlistateven(Node* head){
    Node* temp = head;
    while(temp != NULL){
            cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL ";
}
void insertatPos(Node* &head,int val,int pos){
    Node* node = new Node(val);
    if(pos==1){
        node->next = head;
        head = node;
        return;
    }
    Node* temp = head;
    for(int i=1;i<pos-1 && temp != NULL;i++){
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
}
int main(){
    Node* head = NULL;
    insertatBeg(head,2);
    insertatBeg(head,3);
    insertatBeg(head,4);
    insertatBeg(head,6);
    insertAtEnd(head,1);
    insertatPos(head,8,3);
    printlistateven(head);
}

