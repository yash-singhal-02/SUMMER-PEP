//Circular Linked List:
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
//Insert At End
void InsertAtEnd(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
//Insert at Beginning
void InsertAtBeg(Node* &head, int val){
    Node* node = new Node(val);
    if(head==NULL){
        head = node;
        head->next = head;
        return;
    }
    Node*temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;
    head = node;
}
//Print LL
void print(Node* head){
    if(head==0){
        return;
    }
    Node* temp = head;
    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }while(temp != head);
    cout<<"NULL";
}
// Delete at Beginning
void deleteatbeg(Node* &head){
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    Node* res = head;
    head = head->next;
    delete res;
    temp->next = head;
}

int main(){
    Node* head = NULL;
    InsertAtEnd(head,4);
    InsertAtEnd(head,3);
    InsertAtEnd(head,2);
    InsertAtEnd(head,1);
    print(head);
    cout<<endl;

    InsertAtBeg(head,5);
    print(head);
    cout<<endl;
    
    deleteatbeg(head);
    print(head);

}