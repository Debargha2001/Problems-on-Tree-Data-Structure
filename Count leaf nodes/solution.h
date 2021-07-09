#include "TreeFunctions.h"
int getLeafNodeCount(TreeNode<int>* root){
    if(root==NULL)
        return 0;
    if(root->children.size()==0)
        return 1;
    int leafNodes=0;
    for(int i=0;i<root->children.size();i++){
        leafNodes+=getLeafNodeCount(root->children[i]);
    }
    return leafNodes;
}