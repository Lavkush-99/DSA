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
     List(){
          head=tail=NULL;
        }
     void push_front(int val){
            Node* newNode=new Node(val);
          if(head==NULL){
              head=tail=newNode;
              return ;
            }
            else{
               newNode->next=head;
              head=newNode;
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
    l1.push_front(3);
    l1.push_front(5);
    l1.push_front(7);
    l1.printLL();
    return 0;
}