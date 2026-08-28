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
    bool searchBST(Node* root,int key){
        if(root==NULL) return false;
        if(root->data==key) return true;
        if(root->data<key) searchBST(root->right,key);
        else  searchBST(root->left,key);
    }
int main(){
    vector<int>v={6,3,5,2,7,8};
    Node* root=buildBST(v);
    cout<<"Enter key Value : ";
    int key;
    cin>>key;
    cout<<"Key present in the BST or Not : "<<searchBST(root,key);
}