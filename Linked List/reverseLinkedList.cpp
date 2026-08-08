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
void reverse(Node* head){
    Node* prev=NULL;
    Node* curr=NULL;
    Node* nextNode=NULL;
    while(curr!=NULL){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        cout<<prev->data<<" -> ";
    }
    
}
int main(){
  Node *head=new Node(5);
  head->next=new Node(9);
  head->next->next=new Node(8);
  head->next->next->next=new Node(2);
  reverse(head);
}