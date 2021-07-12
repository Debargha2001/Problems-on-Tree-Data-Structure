#include "TreeFunctions.h"

class secondLargestElementReturnType{
   public:
    TreeNode<int>* max;
    TreeNode<int>* secondMax;
    secondLargestElementReturnType(TreeNode<int>* max,TreeNode<int>* secondMax){
        this->max=max;
        this->secondMax=secondMax;
    }
};
secondLargestElementReturnType* getSecondLargestNodeHelper(TreeNode<int>* root){
    if(root==NULL){
        return new secondLargestElementReturnType(NULL,NULL);
    }
    secondLargestElementReturnType* ans=new secondLargestElementReturnType(root,NULL);
    for(int i=0;i<root->children.size();i++){
        secondLargestElementReturnType* childAns=getSecondLargestNodeHelper(root->children[i]);
        if(childAns->max->data>ans->max->data){
            if(childAns->secondMax==NULL){
                ans->secondMax=ans->max;
                ans->max=childAns->max;
            }
            else{
                if(childAns->secondMax->data>ans->max->data){
                    ans->secondMax=childAns->secondMax;
                    ans->max=childAns->max;
                }
                else{
                    ans->secondMax = ans->max;
                    ans->max = childAns->max;
                }
            }
        }
        else{
            if(childAns->max->data!=ans->max->data && (ans->secondMax==NULL || childAns->max->data>ans->secondMax->data)){
                ans->secondMax=childAns->max;
            }
        }
    }
    return ans;
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root){
    return getSecondLargestNodeHelper(root)->secondMax;
}