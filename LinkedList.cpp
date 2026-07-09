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

//Singly Linked List Operations
// 1.InsertAtEnd
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

// 2. Insert At Beg
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

// 3. Insert at Position
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

//Deletion At END
void DeleteatEnd(Node* &head){
    if(head== NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
void DeleteAtBeg(Node* &head){
    if(head==NULL){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
void deleteatPos(Node* head, int pos){
    Node* temp = head;
    for(int i=1;i<pos- 1;i++){
        temp = temp->next;
    }
    Node* res = temp->next;
    temp->next = temp->next->next;
    delete res;

}
int main(){
    Node* head = NULL;
    // INSERTION
    insertatBeg(head,2);
    insertatBeg(head,3);
    insertatBeg(head,4);
    insertatBeg(head,6);
    insertAtEnd(head,1);
    insertatPos(head,8,3);
    printlistateven(head);
    cout<<endl;
    
    //DELETION
    DeleteatEnd(head);
    printlistateven(head);
    cout<<endl;
    DeleteAtBeg(head);
    printlistateven(head);
    cout<<endl;
    deleteatPos(head,3);
    printlistateven(head);


}

