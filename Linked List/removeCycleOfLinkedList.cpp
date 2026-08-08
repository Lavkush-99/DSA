#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void removeCycle(Node* head){
   if( head==NULL || head->next==NULL) return;
   Node* slow=head;
   Node* fast=head;
   while(fast!=NULL && fast->next!=NULL){
       slow= slow->next;
       fast=fast->next->next;
       if(slow==fast){
          slow=head;
          Node* prev=NULL;
          while(slow!=fast){
              slow=slow->next;
              prev=fast;
             fast=fast->next;
            } prev->next=NULL;
        }
    }
   
}
void print(Node *head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head=new Node(5);
    head->next=new Node(9);
    head->next->next=new Node(2);
    head->next->next->next=new Node(4);
    head->next->next->next->next=head->next;
    removeCycle(head);
    print(head);
    return 0;
}

