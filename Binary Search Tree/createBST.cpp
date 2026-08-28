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
    Node* insertBST(Node* root,int val){
        if(root==NULL) return new Node(val);
        else if(val<root->data)
                root->left=insertBST(root->left,val);
        else
             root->right=insertBST(root->right,val);

        return root;
    }
    Node* buildBST(vector<int>v){
        Node* root=NULL;
        for(int val : v){
            root=insertBST(root,val);           
        }
        return root;       
    }
    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
int main(){
    vector<int>v={5,2,7,8,4};
    cout<<"The Binary Search Tree : ";
    Node* root=buildBST(v);
    inorder(root);
   return 0;
}
