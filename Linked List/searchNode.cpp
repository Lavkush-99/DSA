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
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    int search(int key){
        int idx=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key) return idx;
            else{
                temp=temp->next;
                idx++;
            }
        }
        return -1;
    }
};
int main(){
    List l1;
    l1.push_back(2);
    l1.push_back(7);
    l1.push_back(8);
    l1.push_back(9);
    cout<<"The index of the node element : "<< l1.search(8);
    return 0;
}