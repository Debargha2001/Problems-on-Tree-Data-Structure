#include<bits/stdc++.h>
#include "TreeFunctions.h"
// get max data node
TreeNode<int>* maxDataNode(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    int maxData=INT_MIN;
    TreeNode<int>* maxNode;
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        if(front->data>maxData){
            maxNode=front;
            maxData=front->data;
        }
        for(int i=0;i<front->children.size();i++){
            if(front->children[i]->data>maxData){
                maxNode=front->children[i];
                maxData=front->children[i]->data;
            }
            pendingNodes.push(front->children[i]);
        }
    }
    return maxNode;

}