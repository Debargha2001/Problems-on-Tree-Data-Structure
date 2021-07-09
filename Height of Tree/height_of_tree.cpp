#include<iostream>
#include"TreeFunctions.h"
#include "solution.h"
using namespace std;
int main() {
    TreeNode<int>* root = takeInputLevelWise();
    cout << getHeight(root);
}