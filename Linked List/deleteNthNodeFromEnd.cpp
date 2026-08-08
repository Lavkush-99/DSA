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
Node* removeNode(Node* head,int n){
    int count=0;
    Node* curr=head;
    Node* prev=head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    if(count==n){
        Node* del=head;
        head=head->next;
        delete del;
        return head;
    }
    for(int i=1;i<count-n;i++){
        prev=prev->next;
    }
    curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(9);
    head->next=new Node(8);
    head->next->next=new Node(5);
    head->next->next->next=new Node(4);
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"The head of list after deleting Nth node : ";
    removeNode(head,n);
    return 0;
   
}