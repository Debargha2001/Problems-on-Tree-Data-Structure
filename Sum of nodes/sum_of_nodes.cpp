#include<iostream>
using namespace std;
#include "solution.h"
int main(){
    TreeNode<int>* root=takeInputLevelWise();
    cout<<sumOfNodes(root)<<endl;
}