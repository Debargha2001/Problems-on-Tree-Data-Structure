#include<iostream>
#include "solution.h"
using namespace std;
int main(){
    TreeNode<int>* root1=takeInputLevelWise();
    TreeNode<int>* root2=takeInputLevelWise();
    cout<<(areIdentical(root1,root2)?"True":"False")<<endl;
}