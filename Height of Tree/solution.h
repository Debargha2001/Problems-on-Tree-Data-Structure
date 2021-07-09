#include<bits/stdc++.h>
#include "TreeNode.h"
// height of a tree
int getHeight(TreeNode<int>* root){
    if(root==NULL)return 0;
    int height=0;
    for(int i=0;i<root->children.size();i++){
        height=max(height,getHeight(root->children[i]));
    }
    return height+1;
}