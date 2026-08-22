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
void KthLevelNodes(Node* root,int k){
    if(root==NULL) return;
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    KthLevelNodes(root->left,k-1);
    KthLevelNodes(root->right,k-1);
}
int main(){
    vector<int>preorder={2,4,-1,-1,5,6,-1,-1,8,-1,-1};
    
    Node* root=buildTree(preorder);

    cout<<"Congratulations! The Node Value At Kth Level is : ";
    KthLevelNodes(root,2);
  return 0;
  
}