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
int main(){
    Node* head=new Node(10);
    Node* second= new Node(20);
    head->next=second;
    cout<<head->data<<" -> ";
    cout<<head->next->data;
    return 0;

}