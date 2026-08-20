#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
int idx=-1;
Node* buildTree(vector<int>&preorder){
    idx++;
    if(preorder[idx]==-1) return NULL;
    Node* root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
}
int main(){
    vector<int>preorder={2,4,-1,-1,5,6,-1,-1,8,-1,-1};
    
    Node* root=buildTree(preorder);
    cout<<"Root Node : "<<root->data<<endl;
    cout<<"Root left Node : "<<root->left->data<<endl;
    cout<<"Root Right Node : "<<root->right->data<<endl;
}