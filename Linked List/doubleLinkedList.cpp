#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class doubleList{
    Node* head;
    Node* tail;
    public:
    doubleList(){
        head=NULL;
        tail=NULL;
    }
};
int main(){
    doubleList dl;
    Node* head=new Node(5);
    Node* second=new Node(7);
    head->next=second;
    second->prev=head;
    cout<<head->data<<" <-> ";
    cout<<second->data<<" <-> ";
    cout<<"NULL";
    return 0;

}