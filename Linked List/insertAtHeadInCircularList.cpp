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
class circularList{
    Node* head;
    Node* tail;
    public:
    circularList(){
        head=NULL;
        tail=NULL;
    }
    void insertAthead(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            
            head=newNode;
            tail->next=head;
        }
    }
    void print(){
        if(head==NULL) return;
        cout<<head->data<<" -> ";
        Node* temp=head->next;
        while(temp!=head){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
        cout<<"Well done Lavkush Yadav.";

    }
};
int main(){
    circularList cl;
    cl.insertAthead(5);
    cl.insertAthead(4);
    cl.insertAthead(2);
    cl.print();
    return 0;
}