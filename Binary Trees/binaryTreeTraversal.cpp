#include<iostream>
#include<vector>
#include<queue>
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

// PREORDER TRAVERSAL

void preTraverse(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preTraverse(root->left);
    preTraverse(root->right);
  
}

// INORDER TRAVERSAL

void inorderTravers(Node* root){
    if(root==NULL) return ;
    inorderTravers(root->left);
    cout<<root->data<<" ";
    inorderTravers(root->right);
}

// POSTORDER TRAVERSAL

void postorderTraverse(Node* root){
    if(root==NULL) return;

    postorderTraverse(root->left);
    postorderTraverse(root->right);
    cout<<root->data<<" ";
}

// LEVELORDER TRAVERSAL

void levelorderTraverse(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){

        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        }
    }
}

int idx=-1;
Node* buildTree(vector<int>&preorder){
    idx++;
    if(preorder[idx]==-1) return NULL ;
    Node* root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
int main(){
    vector<int>preorder={2,4,-1,-1,5,6,-1,-1,8,-1,-1};
    Node* root=buildTree(preorder);

    cout<<"Preorder Traversal : ";
    preTraverse(root);
    cout<<endl;

    cout<<"Inorder Traversal : ";
    inorderTravers(root);
    cout<<endl;

    cout<<"Postorder Traversal : ";
    postorderTraverse(root);
    cout<<endl;

    cout<<"Levelorder Traversal : ";
    levelorderTraverse(root);
 return 0;
}