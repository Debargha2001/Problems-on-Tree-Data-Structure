#include "TreeNode.h"
#include<queue>
using namespace std;

//taking input recurively
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data "<<endl;
    cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
    int numChild;
    cout<<"Enter number of children of "<<rootData<<endl;
    cin>>numChild;
    for(int i=0;i<numChild;i++){
        TreeNode<int>* child=takeInput();
        root->children.push_back(child);
    }
    return root;
}

// taking input levelwise
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    // cout<<"Enter root data "<<endl;
    cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        // cout<<"Enter no. of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            // cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

// print tree recursively
void printTree(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

// print tree level wise
void printTreeLevelWise(TreeNode<int>* root){
    if(root==NULL){return;}
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<" : ";
        for(int i=0;i<front->children.size();i++){
            cout<<front->children[i]->data;
            if(i!=front->children.size()-1){
                cout<<",";
            }
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }
}