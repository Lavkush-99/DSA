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
    return root;
}
int heightTree(Node* root){
    // Base Case.
    if(root==NULL) return 0;
    int leftHeight= heightTree(root->left);
    int rightHeight=heightTree(root->right);
    return leftHeight+rightHeight+1;


}
int main(){
    vector<int>preorder={2,4,-1,-1,5,6,-1,-1,8,-1,-1};
    Node* root=buildTree(preorder);
    cout<<"Height of the Tree : "<<heightTree(root);
}