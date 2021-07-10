#include "TreeFunctions.h"
TreeNode<int>* getNextLargerElement(TreeNode<int>* root,int x){
    if(root==NULL){
        return NULL;
    }
    TreeNode<int>* ans=NULL;
    if(root->data>x){
        ans=root;
    }
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* temp=getNextLargerElement(root->children[i],x);
        if(ans==NULL){
            ans=temp;
        }
        else if(temp!=NULL && temp->data<ans->data){
            ans=temp;
        }
    }
    return ans;
}