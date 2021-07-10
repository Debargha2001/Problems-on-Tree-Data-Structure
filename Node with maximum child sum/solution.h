#include "TreeFunctions.h"
class pairObject{
    public:
     TreeNode<int>* node;
     int sum;
};
pairObject maxSumNodeHelper(TreeNode<int>* root){
    pairObject ans;
    ans.node=root;
    ans.sum=root->data;
    for(int i=0;i<root->children.size();i++){
        ans.sum+=root->children[i]->data;
    }
    for(int i=0;i<root->children.size();i++){
        pairObject temp=maxSumNodeHelper(root->children[i]);
        if(temp.sum>ans.sum){
            ans.sum=temp.sum;
            ans.node=temp.node;
        }
    }
    return ans;
}
TreeNode<int>* maxSumNode(TreeNode<int>* root){
    if(root==NULL){
        return NULL;
    }
    return maxSumNodeHelper(root).node;
}