#include<iostream>
#include<List>
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
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid position.\n";
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
        cout<<endl;

    }

};
int main(){
    List l1;
    l1.push_front(5);
    l1.push_front(9);
    l1.push_front(2);
    l1.insert(7,1);
    l1.printLL();
}
