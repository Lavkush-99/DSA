#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class doubleList{  // push and print function class ke ander hi hai because head and tail private hai out of class not accessible.
    Node* head;
    Node* tail;
    public:
    doubleList(){
        head=tail=NULL;
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;       
        }else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }

    }
    void print(){
        Node* temp=head;
        cout<<"NULL"<<" <-> ";
        while(temp!=NULL){
            cout<<temp->data<<" <-> ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    doubleList dl;
    dl.push_back(5);
    dl.push_back(9);
    dl.push_back(7);
    dl.print();
}