#include<iostream>
using namespace std;  // two pointer approach.
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
   
};
 Node* middle(Node* head){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
int main(){
    Node* head=new Node(4);
    head->next=new Node(9);
    head->next->next=new Node(2);
    head->next->next->next=new Node(3);
    head->next->next->next->next=new Node(7);
    head->next->next->next->next->next=new Node(6);
    Node* ans=middle(head);
    cout<<"Middle Node of the list : "<<ans->data;
}