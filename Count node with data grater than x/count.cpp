#include<iostream>
#include "solution.h"
using namespace std;
int main(){
    TreeNode<int>* root=takeInputLevelWise();
    int x;
    cin>>x;
    cout<<getLargeNodeCount(root,x)<<endl;
}