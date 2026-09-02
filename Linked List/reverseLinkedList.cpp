#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* nextNode= curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}
int main(){
  Node *head=new Node(5);
  head->next=new Node(9);
  head->next->next=new Node(8);
  head->next->next->next=new Node(2);
  Node* root=reverse(head);

  cout<<"The Head of the reverse Linked List : "<<root->data;
  
}