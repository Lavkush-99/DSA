#include<iostream>
#include<list>
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
class List{
    Node* head;
    Node* tail;
    public:
    List(){                  // non parametrised constructor that create Null pointer.
        head=tail=NULL;
    }
    void push_back(int val){
         Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        } 
        else{
           tail->next=newNode;
            tail=newNode;
        }
     }
     void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL";
        cout<<endl;
     }
};
int main(){
    List l1;
    l1.push_back(4);
    l1.push_back(7);
    l1.push_back(2);
    l1.printLL();
    return 0;
}