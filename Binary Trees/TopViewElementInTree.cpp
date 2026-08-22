#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
void topElementsOfTree(Node* root){
    queue<pair<int,Node*>>q;
    map<int,int>m;
    q.push({0,root});
    while(!q.empty()){
        Node* curr=q.front().second;
        int currHD=q.front().first;     
        q.pop();
        if(m.find(currHD)==m.end()){
            m[currHD]=curr->data;
        }
        if(curr->left!=NULL) 
         q.push({currHD-1,curr->left});
        if(curr->right!=NULL)
         q.push({currHD+1,curr->right});
    }
    // print all top element that is store in map.
    for(auto it:m){
        cout<<it.second<<" ";
    }
}
int main(){
    vector<int>preorder={2,4,-1,-1,5,6,-1,-1,7,3,-1,-1,8,9,-1,-1,10,-1,-1};    
    Node* root=buildTree(preorder);
    topElementsOfTree(root);
   
}