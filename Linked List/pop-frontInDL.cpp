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
class doubleList{
    Node* head;
    Node* tail;
    public:
    doubleList(){
        head=tail=NULL;
    }
    void pop_front(){
        if(head==NULL) return;
        if(head->next==NULL){
            Node* temp=head;
            head=tail=NULL;
            delete temp;
        }else{
            Node* temp=head;
           
            head=head->next;
           
            head->prev=NULL;
            delete temp;
        }
    }
        void push_front(int val){
            Node* newNode=new Node(val);
            if(head==NULL){
                head=tail=newNode;
            }
            else{
                newNode->next=head;
                head->prev=newNode;
                head=newNode;
            }
        }
        void print(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" <-> ";
                temp=temp->next;
            }
        }
        
    
};
int main(){
    doubleList dl;
    dl.push_front(6);
    dl.push_front(9);
    dl.push_front(4);
    dl.push_front(8);
    dl.print();
    cout<<endl;
    dl.pop_front();
    dl.print();
    return 0;
}