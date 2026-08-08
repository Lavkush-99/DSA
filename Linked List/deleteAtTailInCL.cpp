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
    void insertAttail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void deleteAttail(){
        Node* prev=head;
        if(head==NULL) return;
        if(head==tail){
            head=tail=NULL;
            delete head;
        }else{
             while(prev->next!=tail){
                 prev=prev->next;
                }
                prev->next=head;
                tail->next=NULL;
                delete tail;
            }


    }
    void print(){
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
    cl.insertAttail(5);
    cl.insertAttail(4);
    cl.insertAttail(9);
    cl.insertAttail(3);
    cout<<"inserted element : ";
    cl.print();
    cout<<endl;
    cl.deleteAttail();
    cout<<"After deleting tail element : ";
    cl.print();
    cout<<endl;
    cout<<"Well done Lavkush Yadav doing good Job.Keep doing.";
    return 0;

}