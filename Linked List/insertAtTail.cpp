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
        head=tail=NULL;
        tail->next=head;
    }
    void insertAttail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
       
        else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
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
        cout<<"Well done lavkush Yadav.";
    }

};
int main(){
circularList cl;
cl.insertAttail(9);
cl.insertAttail(4);
cl.insertAttail(7);
cl.insertAttail(8);
cl.print();
return 0;
}