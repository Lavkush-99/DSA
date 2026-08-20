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
int idx=-1;
Node* buildTree(vector<int>&preorder){
    idx++;
    if(preorder[idx]==-1) return NULL;
    Node* root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}

// level At next line.

void levelAtNextLine(Node* root){
    queue<Node*>q;
     q.push(root);
    q.push(NULL);
    while(!q.empty()){
       Node* curr=q.front();
       q.pop();
       if(curr==NULL){
          if(!q.empty()){
              cout<<endl;
              q.push(NULL);
              continue;
            }
            else
              break;
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
          q.push(curr->right);
    }

}
int main(){
    vector<int>preorder={2,4,-1,-1,5,6,-1,-1,8,-1,-1};
    Node* root=buildTree(preorder);
    levelAtNextLine(root);

}