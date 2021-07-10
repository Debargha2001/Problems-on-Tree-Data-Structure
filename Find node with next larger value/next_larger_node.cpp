#include<iostream>
#include "solution.h"
using namespace std;
int main(){
    TreeNode<int>* root=takeInputLevelWise();
    int x;
    cin>>x;
    TreeNode<int>* ans=getNextLargerElement(root,x);
    if(ans!=NULL){
        cout<<ans->data<<endl;
    }
}