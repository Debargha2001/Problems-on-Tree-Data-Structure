#include<iostream>
#include "solution.h"
using namespace std;
int main(){
    TreeNode<int>* root=takeInputLevelWise();
    int k;
    cin>>k;
    printAtLevelK(root,k);
}
