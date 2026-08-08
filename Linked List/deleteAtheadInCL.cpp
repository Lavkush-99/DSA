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
    }
    void deleteAthead(){
        Node* temp=head;
        if(head==NULL) return;
        if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
        }


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
        cout<<temp->data;
    }
};
int main(){
    circularList cl;
    cl.insertAthead(5);
    cl.insertAthead(9);
    cl.insertAthead(8);
    cout<<"Inserted List: ";
    cl.print();
    cout<<endl;
    cout<<"After deleting head the List: ";
    cl.deleteAthead();
    cl.print();
    return 0;


    
}