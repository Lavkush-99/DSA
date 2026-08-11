#include<iostream>
#include<vector>
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
bool isPalindrome(Node* head) {
    Node* slow=head;
    Node* fast=head;
   
    if(head==NULL || head->next==NULL)return true;
  
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
        Node* curr=slow->next;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        Node* first=head;
        Node* second=prev;
        while(second!=NULL){
              if( first->data!=second->data)
               return false;
                        first=first->next;
                        second=second->next;              
        }
        return true;
    }    
int main(){
    Node* head=new Node(3);
    head->next=new Node(8);
    head->next->next=new Node(8);
    head->next->next->next=new Node(0);
    head->next->next->next->next=NULL;
    cout<<"The given linked list are palindrome or not : "<<isPalindrome(head);

}