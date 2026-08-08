
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

    Node* reverseKgroup(Node* head,int k){
        int count=0;
        Node* temp=head;
        while(count<k){
            if(temp==NULL) return head;
            temp=temp->next;
            count++;
        }
        Node* prevNode=reverseKgroup(temp,k);
        temp=head;
        count=0;
       while(count<k){
        
        Node* next=temp->next;
        temp->next=prevNode;
        prevNode=temp;
        temp=next;
        count++;
       }
       return prevNode;
    }
    void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }

    }
int main(){
    Node* head=new Node(4);
    head->next=new Node(8);
    head->next->next=new Node(9);
    head->next->next->next=new Node(3);
    head->next->next->next->next=new Node(6);
    cout<<"Before reversing the K-group : ";
    print(head);
    cout<<endl;
    Node* ans=reverseKgroup(head,2);
    cout<<"After reversing the List : ";
   
    print(ans);
    return 0;
}