#include<iostream>
#include "solution.h"
using namespace std;
int main(){
    TreeNode<int>* root=takeInputLevelWise();
    cout<<"Tree before replacing  "<<endl;
    printTreeLevelWise(root);
    replaceWithDepthValue(root);
    cout<<"Tree after replacing "<<endl;
    printLevelAtNewLine(root);
    cout<<endl;
}