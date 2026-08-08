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
bool isCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}
int main(){
    Node* head=new Node(4);
    head->next=new Node(9);
    head->next->next=new Node(8);
    head->next->next->next=new Node(7);
  //  head->next->next->next=head->next;
    cout<<"Check List are cyclic or not : "<<isCycle(head);
    return 0;
}