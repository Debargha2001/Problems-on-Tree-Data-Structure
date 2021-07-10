#include<iostream>
#include "solution.h"
using namespace std;
int main(){
    TreeNode<int>* root=takeInputLevelWise();
    TreeNode<int>* ans=maxSumNode(root);
    if(ans!=NULL){
        cout<<ans->data<<endl;
    }
}