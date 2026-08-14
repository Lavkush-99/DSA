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
class Queue{
    public:
    Node* head;
    Node* tail;
    Queue(){
        head=tail=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(empty()){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }

    }
    void pop(){
        if(empty()) return ;
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }

    }
    int front(){
        if(empty()){          
            return head->data;
        }
        else{
            return head->data;
        }
    }
    bool empty(){
        return head==NULL;
    }
    void print(){
        cout<<"The Queue using Linked List is : ";
        
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }                   
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.print();
    q.pop();
    q.print();
}